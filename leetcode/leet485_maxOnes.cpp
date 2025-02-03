#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int max_ones(vector<int> nums){
    int count=0;
    int maxval=0;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }
        else{
            maxval=max(maxval,count); 
            count=0;
        }
    }
   maxval=max(maxval,count); 
    return maxval;
}
int main(){
    vector<int> nums={0,1,1,1,1,0,1,1,1};
    cout << max_ones(nums) << endl;
    return 0;
}