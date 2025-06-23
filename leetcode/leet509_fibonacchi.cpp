//leet509
#include<iostream>
using namespace std;

int fib(int n){
    int fibArr[n+1];
    fibArr[0]=0;
    fibArr[1]=1;
    for(int i=2;i<=n;i++){
        fibArr[i]=fibArr[i-1]+fibArr[i-2];
    }
    return fibArr[n];
}

int fibRec(int n){
    if(n<=1) return n;
    int last=fibRec(n-1);
    int Slast=fibRec(n-2);
    return last + Slast;
}

int main(){
    int n=9;
    cout << fib(n);
    cout << fibRec(n) << endl;
    return 0;
}