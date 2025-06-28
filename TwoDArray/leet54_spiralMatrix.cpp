#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix){
    int m=matrix[0].size();
    int n=matrix.size();
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    vector<int> ans;
    while(srow<=erow && scol<=ecol){
        //top
        for(int col=scol;col<=ecol;col++){
            ans.push_back(matrix[srow][col]);
        }

        //right
        for(int row=srow+1;row<=erow;row++){
            ans.push_back(matrix[row][ecol]);
        }

        //bottom
        for(int col=ecol-1;col>=scol;col--){
            if(srow==erow){
                break;
            }
            ans.push_back(matrix[erow][col]);
        }

        //left
        for(int row=erow-1;row>=srow+1;row--){
            if(scol==ecol){
                break;
            }
            ans.push_back(matrix[row][scol]);
        }
        srow++;scol++;erow--;ecol--;
    }
    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    vector<int> result = spiralMatrix(mat);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}