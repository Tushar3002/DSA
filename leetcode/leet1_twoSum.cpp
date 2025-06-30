#include<iostream>
#include<vector>
#include <unordered_map>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {//Brute Force O(n^2)
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

vector<int> twoSum2(vector<int>& nums, int target) {// Better
    sort(nums.begin(),nums.end());
    int st=0;
    int end=nums.size()-1;
    while(st <= end){
        if(nums[st]+nums[end]==target){
            return {st,end};
        }
        else if(nums[st]+nums[end] > target){
            end--;
        }
        else{
            st++;
        }
    }  
    return {-1,-1};  
}

vector<int> twoSum3(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int first= nums[i];
            int sec=target-first;

            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }

int main(){
    vector<int> num = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum3(num,target);
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}