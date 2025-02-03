#include<iostream>
#include<vector>
using namespace std;

void print_v(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
}
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index])
            {
                min_index=j;
            }
        }
        swap(v[i],v[min_index]);
    }
}
int main(){
    vector<int> v={2,1,5,3,9};
    selectionSort(v);
    print_v(v);
    return 0;
}