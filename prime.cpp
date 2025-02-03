#include<iostream>
using namespace std;
int main(){
    bool isPrime=true;
    int n=30;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<< "Prime";
    }else{
        cout<<"Not a Prime";
    }
    return 0;
}