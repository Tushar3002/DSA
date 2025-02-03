#include<bits/stdc++.h>
using namespace std;
typedef unordered_map<string,vector<string>> um;

vector<int> runningSum(vector<int>& vi) {
    int sum=0;
    for(int i=0;i<vi.size();i++){
        sum += vi[i];
        vi[i]=sum;
    }
    return vi;
}

int main(){
    
    vector<int> vi = {1,2,3,4};
    vector<int> result = runningSum(vi);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
//iterator
//mapping


//name_map["Tus"]={"Har","Jana"};
//name_map.insert=({"Tus",{"har"}});

// to print :

// map<string,vector<string>> msvs
// msvs::iterator itr;
// for(itr=name_map.begin();itr!=name_map.end();itr++)
// {
//     pair<string,vs> one_row ={*itr};//3lines not require
//     String name=_one_row.first;
//     vs name_list=one_row.second;
//     cout << name << ": ";//itr->first
//     print_vs(name_map);//itr->second

//     for (name_map:name_list){
//         cout << name_map;
//     }

// }