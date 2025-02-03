#include<iostream>
#include<vector>
using namespace std;


double myPow(double x, int n) {
    long bin=n;
    if(n<0){
        x = 1/x;
        bin = -bin;
    }
    double ans=1;

    while(bin>0){
        if(bin%2==1){
            ans *= x;
        }
        x *= x;
        bin /= 2;
    }
    return ans;
    
}
int main(){
    cout << myPow(5,3);
    return 0;
}