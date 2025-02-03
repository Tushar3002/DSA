#include<iostream>
using namespace std;

int fact(int n){//space : auxillary O(n)
    
    if(n==0) return 1;
    
    return fact(n-1)*n;
}

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int sumodd(int n){
    
    if(n==1) return 1;
    return n+(n-1) + sumodd(n-1); //(2*n-1)
}

int sumodd3(int n){
    
}

int sumodd2(int n){
    return (n==1) ? 1 : n + sumodd2(n-2); 
}

int printNum(int n,int val){
    cout << n <<" ";
    if(n>=val) return 0;
    
    return printNum(n+1,val);
}
void printNum2(int n){
    
    if(n==1){ cout << 1 << " ";}
    else{
        printNum2(n-1);
        cout << n <<" ";
    }
    
    
}

int main(){
    
    //cout << sum(5) << endl;
    //cout << sumodd(5) << endl;
    //printNum(1,5);
    printNum2(5);
    return 0;
}