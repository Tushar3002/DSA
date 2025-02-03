#include<iostream>
#include<vector>
#include<algorithm>//sort()
using namespace std;

void sortColors(vector<int>& nums) { //tc=O(nlogn) sc=O(1)
    sort(nums.begin(),nums.end());
    
}
void approach2(vector<int>& v){//O(4n)
    int count0=0,count1=0,count2=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) count0++;
        if(v[i]==1) count1++;
        if(v[i]==2) count2++;
    }
    int idx=0;
    for(int i=0;i<count0;i++){
        v[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        v[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        v[idx++]=2;
    }
}
void printV(vector<int> nums){
    for(int i:nums){
        cout << i << " ";
    }
}
void optimal(vector<int>& nums){//dnf algo  danish flag 
    int mid=0,low=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> v={2,0,2,1,1,0};
    //sortColors(v);
    //approach2(v);
    optimal(v);
    printV(v);
    return 0;
}
