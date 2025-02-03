// #include<iostream>
// #include<vector>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define forn(i,n) for(int i=0;i<n;i++)

vi input_vector(){
    int n;
    cin >> n;
    vi v(n);
    forn(i, n) {
        cin >> v[i];
    }
    return v;
    
}


void print_vi(vi &v){
    forn(i,v.size())
    {
        cout << v[i] << " ";
    }cout<<"\n";
}
int max_vect(vi &v){
    //int arr[]={5,9,4,3,2};
    int max_v=INT_MIN;
    forn(i,v.size()){
        if(max_v<v[i]){
            max_v=v[i];
        }
    }
    return max_v;
}

void solve(){
    vi v=input_vector();
    print_vi(v);
    int m=max_vect(v);
    
    cout << m <<"\n";
    cout << *max_element(v.begin(), v.end()) << "\n";
}
int main(){
    solve();
    return 0;
}
