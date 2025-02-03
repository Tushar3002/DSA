#include<iostream>
#include<vector>
using namespace std;

void print_v(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
}

void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int curr=v[i];
        int prev=i-1;
        while(prev >= 0 && v[prev]>curr){
            v[prev+1] =v[prev];
            prev--;
        }
        v[prev+1]=curr;
    }
}

int main(){
    vector<int> v={2,1,5,3,9};
    insertionSort(v);
    print_v(v);
    return 0;
}