#include<iostream>
using namespace std;

int diagonal(int matrix[][3],int n){//O(n*n)
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += matrix[i][j];
            }else if(j==n-1-i){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int diagonal2(int matrix[][3],int n){//O(n)
    int sum=0;

    for(int i=0;i<n;i++){
        sum += matrix[i][i];
        if(i != n-i-1){
            sum += matrix[i][n-i-1];    
        }
    }
    return sum;
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diagonal(matrix,n) <<endl;
    cout<<diagonal2(matrix,n) <<endl;
    return 0;
}