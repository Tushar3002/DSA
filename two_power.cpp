#include<iostream>
#include<vector>
using namespace std;

bool two1(int num){
    if (num <= 0) return false;
    while (num % 2 == 0) {
        num /= 2;
    }
    return num == 1; 
}

bool two2(int n){//bit
    if(n<0) return false;
    while(!(n&1)){
        n>>=1;
    }
    return (n&1 && !(n>>1)); //
}
bool two3(int n){//bitwisw
    return !(n&(n-1));

}
bool four(int n){
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 4;
    }
    return n == 1;
}

bool four2(int n){//bit
    while(!(n&1)){
        n>>=1;
    }
    return (n&1 && !(n>>1)); //
}
bool four3(int n){//bitwisw
    return !(n&(n-1));

}

int solve(vector<int> &v){
    int val=0;
    for(int i:v){
        val ^= i;
    }
    return val;
}

int solve(vector<int> &v){
    int val=0,sum=0;
    for(int i:val){
        val ^= i;
    }
    for(int i=0;i<n;i++){
        sum ^= i;
    }
    val = val ^ sum;
    return val;
}

int main(){
    int val;
    //cin >> val; 
    vector<int> v={1,1,1,1,2,2,3,3,3,4,4};
    // cout << two1(val) << endl;
    // //cout << two2(val) << endl;
    // cout << four(val) << endl;
    cout << solve(v) << endl;
    return 0;
}