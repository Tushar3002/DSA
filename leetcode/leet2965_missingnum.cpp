//find repeating and missing value

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> sol(vector<vector<int>>& grid){
    int n=grid.size();
    int expsum,actualsum=0;
    int a,b;
    vector<int> ans;
    unordered_set<int> s;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualsum += grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expsum=(n*n)*(n*n+1)/2;
    b=expsum+a-actualsum;
    ans.push_back(b);
    return ans;
}

int main(){
    vector<vector<int>> grid={{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans= sol(grid);
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}