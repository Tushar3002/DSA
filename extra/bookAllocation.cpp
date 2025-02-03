//book allocation problem//Google
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr,int n,int m,int maxAllowedPages){//O(n)
    int stud=1,pages=0;

    for(int i=0;i<n;i++){
        if(arr[i]=maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            stud++;
            pages=arr[i];
        }
    }
    return stud > m ? false:true;
}

int solve(vector<int> v,int n,int m){////O(logN * n)
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){//O(n)
        sum += v[i];
    }

    int st=0,end=sum,ans=-1;
    while(st <= end)//O(logN * n)
    {
        int mid=st+(end-st)/2;
        if(isValid(v,n,m,mid)){//left
            ans=mid;
            end = mid-1;
        }else{//right
            st=mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int> v={2,1,3,4};
    int n=4,m=2;
    solve(v,n,m);
    return 0;
}