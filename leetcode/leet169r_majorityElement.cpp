//MAjotity Element

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int approach1(vector<int> nums){//brute force
    int n=nums.size();
    for(int i:nums){
        int count=0;
        for(int j:nums){
            if(j==i){
                count++;
            }
        }
        if(count>n/2){
            return i;
        }
    }
    return -1;
}

int approach2(vector<int> nums){//optimize  O(nlogn)
    sort(nums.begin(),nums.end());
    int freq=1;
    int ans=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

int approach3(vector<int> nums){//best approach ,  Moore's algo , O(n)

    int freq=0;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
return ans;
}
int main(){ 
    vector<int> v={2,1,2,2,1};
    cout << approach3(v);
    return 0;
}