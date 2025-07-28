#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int findLucky(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); 
    int ans = -1;

    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (i < n && arr[i] == arr[i - 1]) {
            count++;
        } else {
            
            if (count == arr[i - 1]) {
                ans = max(ans, arr[i - 1]);
            }
            count = 1; 
        }
    }

    return ans;
}

int findLucky2(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    
    int ans = -1;
    // for (auto& [num, count] : freq) {
    //     if (num == count) {
    //         ans = max(ans, num);
    //     }
    // }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
    int num = it->first;
    int count = it->second;
    if (num == count) {
        ans = max(ans, num);
    }
}

    
    return ans;
}



int main(){
    vector<int> arr={2,2,3,4};
    cout << findLucky2(arr) << endl;
    return 0;
}