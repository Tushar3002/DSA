#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void approach1(){ // not preferable as wont work for large numbers
    vector<int> v={1,2,3,4,5,6};
    int temp;
    int k=2;
    for(int i=0;i<k;i++){
        temp=v[v.size()-1];
        
        for(int j=v.size()-1;j>0;j--){
            
            v[j]=v[j-1];
        }
        v[0]=temp;
    }
    
    for(int val:v){
        cout << val << endl;
    }
}

void approach2(){
    vector<int> v={1,2,3,4,5,6};
    int k=2;
    int n = v.size();
    k %= n;  // Handle cases where k > n
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    
    for(int val:v){
        cout << val << endl;
    }
}

int main(){
    approach2();
    return 0;
}