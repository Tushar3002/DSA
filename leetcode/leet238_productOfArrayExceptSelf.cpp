#include<iostream>
#include<vector>
using namespace std;

vector<int> ex(vector<int>& nums) { //O(3n)
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++) {
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    for (int i = n - 2; i >= 0; i--) {
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    for (int i = 0; i < n; i++) {
        ans[i]=prefix[i]*suffix[i];
    }

    return ans;
}
vector<int> ex2(vector<int>& nums) { //O(2n)
    int n = nums.size();
    vector<int> ans(n, 1);


    for (int i = 1; i < n; i++) {
        ans[i]=ans[i-1] * nums[i-1];
    }

    int suffix=1;
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}
vector<int> solve(vector<int>& nums) { //O(2n)
    int n = nums.size();
    vector<int> result(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix; 
        prefix *= nums[i]; 
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix; 
        suffix *= nums[i]; 
    }

    return result;
}
vector<int> solve1(vector<int>& nums) {//brute force O(n^2)
    int n = nums.size();
    vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {  // Don't multiply by the current element
                prod *= nums[j];
            }
        }
        result[i] = prod;  // Store the product for the current index
    }
    
    return result;
}
int main() {
    vector<int> v = {1, 2, 3, 4};

    vector<int> result = solve(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}