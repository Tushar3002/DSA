#include<iostream>
using namespace std;

void decitobinary(int val){
    int ans=0,pow=1;
    while(val >0){
        int rem=val%2;
        val /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    cout << ans << endl;
}

void binarytodeci(int val){
    int ans=0,pow=1;
    while(val>0){
        int rem=val%10;
        val /= 10;
        ans += (rem*pow);
        pow *= 2;
    }
    cout << ans;
}

int main(){
    // for(int i=0;i<=10;i++){
    //     decitobinary(i);
    // }
    binarytodeci(111);
    return 0;
}