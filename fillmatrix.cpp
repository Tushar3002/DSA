#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> hori(int n,int m){
    vector<vector<int>> ans(n, vector<int>(m));
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=count++;
        }
    }

    return ans;
}
vector<vector<int>> vert(int n,int m){
    vector<vector<int>> ans(n, vector<int>(m));
    int count=1;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            ans[i][j]=count++;
        }
    }

    return ans;
}

void print(vector<vector<int>>& vec){
    for(auto i:vec){
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n=2,m=3;
    vector<vector<int>> mat=hori(n,m);
    print(mat);
    vector<vector<int>> mat2=vert(n,m);
    print(mat2);

    return 0;
}