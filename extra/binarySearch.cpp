#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr,int target){//O(logn)

    int st=0,end=arr.size()-1;
    //bool flag=false;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(arr[mid]<target){
            st=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]==target){
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> v={-11,-3,4,6,10,15,33,54,88,99};
    vector<int> v1={30,22,15,3,1,0};
    cout << binarySearch(v,33) << endl;
    return 0;
}