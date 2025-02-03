//Understa

#include <bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int>& A) {
        //find pivot
        int pivot=-1,n=A.size();
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(A.begin(),A.end());//in place change
            return;
        }
        // 2nd step : next largest element
        for(int i=n-1;i>pivot;i--){
            if(A[i]>A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }

        //3rd : reverse (pivot+1 to n-1)
        int i=pivot+1,j=n-1;
        while(i <= j){
            swap(A[i++],A[j--]);
        }
}
void per(vector<int>& A){
    next_permutation(A.begin(),A.end());
}
void pri(vector<int> A){
    for(int i:A){
        cout << i << " ";
    }
}

int main(){
    vector<int> v={1,2,3};
    //nextPermutation(v);
    per(v);
    pri(v);
    return 0;
}