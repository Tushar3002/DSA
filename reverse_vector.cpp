#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define forn(i,n) for(int i=0;i<n;i++)

vi input_vector(){
    cout << "Now enter the vector values u want :"<<endl;
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

void vector_print(vi &v){
    forn(i,v.size()-1){
        swap(v[i],v[v.size()-1-i]);
    }
    print_vi(v);
}
void vector_print2(vi &v){
    int s=0,e=v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    } 
    print_vi(v);
}

void vector_print3(vi &v){
    for(int s=0,e=v.size()-1;s<e;s++,e--){
        swap(v[s],v[e]);
    }
    print_vi(v);
}
void solve(){
    vi v=input_vector();
    print_vi(v);
    vector_print2(v);
}
int main(){
    solve();
    return 0;
}

