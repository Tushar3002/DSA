#include<iostream>
#include<vector>
using namespace std;

int solve2(vector<int> v){//O(n) won't work in leet
    int ans;
    for(int i=1;i<v.size();i++){
        if(v[i-1]!=v[i] && v[i]!=v[i+1])
        {
            ans=v[i];
        }
    }
    return ans;
}
int solve3(vector<int> v){//O(n) will work
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    return ans;
}

int solve(vector<int> v){//O(logn)
    int n=v.size();

    if(n==1) return v[0]; 
    int s=0,e=n-1;  
    while(s<=e){
        int mid=s+(e-s)/2;

        if(mid==0 && v[0] != v[1]) return v[mid];
        if(mid==n-1 && v[n-1] != v[n-2]) return v[mid];
    
        if(v[mid-1]!=v[mid] && v[mid]!=v[mid+1]){
            return v[mid];
        }
        if(mid%2==0){//even
            if(v[mid-1]==v[mid]){//left
                e=mid-1;
            }else{//right
                s=mid+1;
            }
        }else{//odd
            if(v[mid-1]==v[mid]){//right
                s=mid+1;
            }else{//left
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> v={1,1,2,2,3,4,4};

    cout << solve(v) << endl;
    return 0; 
}