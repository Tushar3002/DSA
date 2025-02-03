#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
#define forn(i,n) for(int i=0;i<n;i++)

void pairsum(){
    vi v={2,7,11,15};
    int n=v.size();
    int target=26;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout << v[i] << " " << v[j];
                found=true;
            }
        }
    }
    if(!found){
        cout << "Value no found" << endl;
    }
}
void pairsum2(){
    vi v={2,7,11,15};
    vi v2;
    int n=v.size();
    int target=26;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                v2.push_back(i);
                v2.push_back(j);
            }
        }
    }
    cout << v2[0] << " " << v2[1] << endl;
}

vector<int> pairsum3(){
    vi v={2,7,11,15};
    vi ans;
    int n=v.size();
    int i=0,j=n-1;
    int target=17;

    while(i<j){
        int pairsum=v[i]+v[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
}

void mode(){
    vi v={2,7,11,15};

}
void solve(){
    pairsum3();
    vi ans=pairsum3();
    cout << ans[0] << ", " << ans[1] << endl;

}
int main(){
    solve();
    return 0;
}