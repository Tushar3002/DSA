#include<iostream>
#include<climits>
using namespace std;

int reverse(int v) {
    if (v == INT_MIN) return 0;
    long rev=0;
    int rem;
    int x=v;
    if(x<0){
        x=-(x);
    }
    while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        x /= 10;
    }
    if(v<0){
        rev=-(rev);
    }
    if (rev > INT_MAX || rev < INT_MIN) {
        return 0;
    }
    return rev;
}

int main(){
    cout << reverse(123) << endl;
    return 0;
}