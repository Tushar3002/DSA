#include<iostream>
#include<vector>
using namespace std;

void print_v(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
}
void bubbleSort(vector<int> &v){//O(n^2)
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool isSort=false;//optimize
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                isSort=true;
            }
        }
        if(!isSort){
            return;
        }       
    }
}
int main()
{
    vector<int> v={3,4,1,2};
    bubbleSort(v);
    print_v(v);
    return 0;
}