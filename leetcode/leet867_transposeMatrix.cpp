#include<iostream>
#include<vector>
#include <math.h>
using namespace std;

void solve(vector<vector<int>> &vec){
    vector<vector<int>> ans(vec[0].size(), vector<int>(vec.size()));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            ans[j][i]=vec[i][j];
        }
        
    }
   
    for(auto i:ans){
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}

void print(vector<vector<int>> &vec){
    
}


int main(){
    vector<vector<int>> vec{
        {2,4,-1},
        {-10,5,15},
        {18,-7,6}
    };
    solve(vec);
    //print(vec);
    return 0;
}