//Peak index in mountain array
#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int s=1,e=arr.size()-2;

    while(s <= e){
        int mid=s+(e-s)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> v={0,10,5,2};
    cout << peakIndexInMountainArray(v) << endl;
    return 0;
}