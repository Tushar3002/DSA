#include<iostream>
using namespace std;


int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int tar=2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]==tar){
                cout << "Value Found at : " <<matrix[i][j] <<endl;
            }
        }
    }
    return 0;

}