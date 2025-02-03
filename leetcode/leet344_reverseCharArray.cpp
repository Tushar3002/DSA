#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v={'h','e','l','l','o'};
    int i=0,j=v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }

    for(char i:v)
    {
        cout << i <<" ";
    }
    cout << endl;
    return 0;

}