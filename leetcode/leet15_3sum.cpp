#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n=nums.size();
    set<vector<int>> s;
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip)==s.end()){ //not found in set
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
        return ans;
    }

}

vector<vector<int>> threeSum2(vector<int>& nums) {
    int n=nums.size();
    set<vector<int>> uniqueTriplets;

    for(int i=0;i<n;i++){
        int tar=-nums[i];
        set<int> s;
        for(int j=i+1;j<n;j++){
                int third=tar-nums[j];
                if(s.find(third)!=s.end()){
                    vector<int> trip={nums[i],nums[j],third};
                    sort(trip.begin(),trip.end());
                    uniqueTriplets.insert(trip);
                }
                s.insert(nums[j]);
        }
        
    }
    vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
    return ans;

}

vector<vector<int>> threeSum3(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k){
            
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }else if(sum>0){
                k--;
            }else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++,k--;
                while(j<k && nums[j]==nums[j-1]) j++;
            }
        }
    }
    return ans;

}

int main(){
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum3(v);
    for (const auto& triplet : ans) {
        for (int num : triplet)
            cout << num << " ";
            cout << endl;
    }

    return 0;
}