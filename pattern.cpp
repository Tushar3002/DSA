#include<bits/stdc++.h>
using namespace std;

void pattern(){
    int n=5;
    for(int i=0;i<n;i++){
        for (int j = 0; j < i+1; j++)
        {
            cout << i<<" ";
        }
        cout<<endl;
        
    }
}
void patternchar(){
    int n=5;
    char c=65;
    for(int i=c;i<n;i++){
        for (int j = 0; j <= i; j++)
        {
            cout << c<<" ";
            
        }
        cout<<endl;    
    }
}

void pattern2(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << i;
        }
        cout<<endl;
        
    }
}
void pattern3(){
    int n=5;
    for(int i=n;i>=0;i--){
        for (int j = 0; j < i+1; j++)
        {
            cout << i;
        }
        cout<<endl;
        
    }
}
void pattern4() {
    int n = 5;
    for (int i = n; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print the current number `i`
        for (int j = 0; j < i + 1; j++) {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(){
    int n=5;
    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for (int j = 1; j < i+1; j++)
        {
            cout << j ;
        }

        for (int j = i-1; j >= 1; j--)
        {
            cout << j ;
        }
        cout<<endl;
        
    }
}
int main(){
    //pattern();
    // patternchar();
    //pattern2();
   // pattern3();
    //pattern4();
    pattern5();
    return 0;

}