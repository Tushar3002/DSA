//replace-elements-with-greatest-element-on-right-side
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int max_right = -1;

    for (int i = arr.size() - 1; i >= 0; --i) {

        int current = arr[i];
        arr[i] = max_right;
        max_right = max(current, max_right);
    }

    return arr;
}

int main() {
    
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int> result = replaceElements(arr);
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}

