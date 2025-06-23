#include<iostream>
using namespace std;

int maxRowSum(int matrix[][3]){
    int sum=0,maxN=INT16_MIN;
    for(int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum += matrix[i][j];
        }
        // if(sum>maxN){
        //     maxN=sum;
        // }
        maxN=max(sum,maxN);
    }
    return maxN;

}

int minRowSum(int matrix[][3]){
    int sum=0,minN=INT8_MAX;
    for(int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum += matrix[i][j];
        }
        // if(sum>maxN){
        //     maxN=sum;
        // }
        minN=min(sum,minN);
    }
    return minN;

}

int maxCol(int matrix[][3]){
    int sum=0,maxN=INT16_MIN;
    for(int i=0;i<3;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum += matrix[j][i];
        }
        // if(sum>maxN){
        //     maxN=sum;
        // }
        maxN=max(sum,maxN);
    }
    return maxN;

}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<minRowSum(matrix) <<endl;
    cout << maxRowSum(matrix)<<endl;
    cout << maxCol(matrix)<<endl;

    return 0;
}