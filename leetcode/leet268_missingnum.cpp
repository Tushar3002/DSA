#include<iostream>
#include<vector>
using namespace std;


int solve(vector<int>& v){
    int n=v.size();
    int tot=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += v[i];
    }
    int ans=tot-sum;
    return ans;
}
// int solve1(){
//     int mis=0;
//     for(int i=0;i<v.size();i++){
//         mis ^= (i+1) ^ v[i];
//     }
//     return mis;
// }
int main(){
    vector<int> v={0,1,3};
    cout << solve(v) << endl;
    return 0;
}