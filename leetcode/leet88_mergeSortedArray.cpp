#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
    //vector<int> v3();
    int idx=m+n-1,i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(v1[i]>=v2[j]){
            v1[idx--]=v1[i--];
        }else{
            v1[idx--]=v2[j--];
        }
    }
    while(j>=0){
        v1[idx--]=v2[j--];
    }
}
void printv(vector<int> v){
    for(int i:v){
        cout << i << " ";
    }
}
int main(){
    vector<int> v={1,2,3,0,0,0};
    vector<int> v2={2,5,6};
    merge(v,3,v2,3);
    printv(v);
    return 0;
}