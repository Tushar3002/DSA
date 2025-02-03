#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define all(v) v.begin(), v.end()
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
bool check_sorted(vi v){
    bool flag=false;
    int i;
    for(i=0;i<v.size()-1;i++){
        if(v[i] > v[i+1]){
            flag=true;
            break;
        }
    }

    for(i++;i<v.size()-1;i++){
        if(flag && v[i]<v[i+1]){
            return false;
        }
        else if(!flag && v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    vi v=input_vector();
    //print_vi(v);
    cout << check_sorted(v) << endl;
}
int main(){
    solve();
    
    return 0;
}