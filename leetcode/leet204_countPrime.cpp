#include<iostream>
#include<vector>

using namespace std;

//sieve of eratosthenes
int countPrime(int n){
    vector<bool> isPrime(n+1,true);
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(isPrime[i]){
            count++;
            for(int j=i*2;j<n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    return count;
}

int countPrime2(int n){
    int count = 0;
    
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            count++;
        }
    }
    return count;
}


int main(){
    cout << countPrime(10) << endl;
    cout << countPrime2(10) << endl;
    
    return 0;
}