//find pivot //leet1991 has same solution
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> v){//O(n^2)
    int n=v.size();
    for(int i=0;i<n;i++){
        int lsum=0;
        for(int j=0;j<i;j++){
            lsum += v[j];
        }
        int rsum=0;
        for(int j=1+i;j<n;j++){
            rsum += v[j];
        }
        if(lsum==rsum){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> v={1,7,3,6,5,6};
    cout << solve(v);
    return 0;
}