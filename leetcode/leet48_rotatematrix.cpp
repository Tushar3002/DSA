#include<iostream>
#include<vector>
using namespace std;

void solve(vector<vector <int>>& v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int s=0,e=n-1;
        while(s<e){
            swap(v[i][s],v[i][e]);
            s++;
            e--;
        }
    }
}
void print_matrix(vector<vector <int>>& v){
    for(auto i:v){
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector <int>> v={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print_matrix(v);
    solve(v);
    cout << endl;
    print_matrix(v);
    return 0;
}