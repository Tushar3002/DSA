//which part of subArrayy Will have largest Total
#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int> v){
    int n=5;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout << i ;
            }
            cout << " ";
        }
        cout << endl;
    }
}
void subarray_sum(vector<int> v){ // brute force approach //O(n^2)
    int n=v.size();;
    // int arr[5]={1,2,3,4,5};
    int maxSum= INT8_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum += v[end];
            maxSum=max(currsum,maxSum);
        }
    }cout << maxSum << endl;
}
void kandane_algo(vector<int> v){//O(n) best approach
    //vector<int> v();
    // int arr[]={1,-2,3,4,5,6};
    int curSum=0;
    int maxSum=INT8_MIN;
    for(int i : v){
        curSum += i;
        maxSum=max(curSum,maxSum);
        if(curSum<0){
            curSum=0;
        }
    }
    cout << maxSum;
}
void pra(vector<int> v){//lowest approach dont use
    
    int maxval=INT8_MIN;
    
    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<v.size();j++){
            sum += v[j];
            maxval=max(maxval,sum);
        }
    }
    cout << maxval;

}
int main(){
    vector<int> v={1,-2,3,4,5,6};
    //subarray();
    subarray_sum(v);
    //pra(v);
    //kandane_algo(v);
    return 0;
}