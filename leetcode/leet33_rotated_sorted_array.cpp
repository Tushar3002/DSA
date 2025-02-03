//search in rotated sorted 

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {//O(logn) //binary search
    int s=0,e=nums.size()-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[s] <= nums[mid]){//left srted
            if(nums[s] <= target && target <= nums[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }else{//right sorted
            if(nums[mid] <= target && target <=nums[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> v={4,5,6,7,0,1,2};
    int tar=0;
    cout << search(v,tar) << endl;
    return 0;
}