#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int solve(vector<int>& v){
    unordered_set<int> s;
    // int ans;
    // int n=v.size();
    // for(int i=0;i<n;i++){
        
    //     if(s.find(v[i])!=s.end()){
    //         ans=v[i];
    //         break;
    //     }
    //     s.insert(v[i]);
    // }
    // return ans;

    for(int i:v){
            if(s.find(i)!=s.end()){
                return i;
            }
            s.insert(i);
        }
        return -1;
}

int solve2(vector<int>& v){//linked llist Slow-FastApproach 
    int slow=v[0];
    int fast=v[0];

    do
    {
        slow=v[slow];//+1
        fast=v[v[fast]];//+2
    } while (slow!=fast);

    slow=v[0];
    while(slow!=fast){
        slow=v[slow];//+1
        fast=v[fast];//+1
    }
    return slow;


    // v = {1, 3, 4, 2, 2},
    // s=1	f=1
    // s=3	f=2
    // s=2	f=2
    // s==f
    // s=1	f=2
    // s=3	f=4
    // s=2	f=2
    // return s;
}

int main(){
    vector<int> v={1,3,4,4,2};
    //vector<int> ans=solve(v);
    cout << solve2(v) << endl;
    return 0;
}
