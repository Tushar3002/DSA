#include<iostream>
#include<vector>

using namespace std;


void sol(vector<int> &arr, vector<int> ans, int i, vector<vector<int>> &allSub)
{
    if (i == arr.size())
    {
        allSub.push_back({ans});
        return;
    }

    ans.push_back(arr[i]);
    sol(arr, ans, i + 1, allSub);

    ans.pop_back();
    sol(arr, ans, i + 1, allSub);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> allSub;
    vector<int> ans;

    sol(nums, ans, 0, allSub);
    return allSub;
}

int main(){
    vector<int> v={1,2,3};
    vector<vector<int>> ans=subsets(v);
    for(auto i:ans){
        for(int j:i){
            cout << j <<" ";
        }cout << endl;
    }
    return 0;
}


// sol([], i=0)
// ├── include 1 → sol([1], i=1)
// │   ├── include 2 → sol([1,2], i=2)
// │   │   ├── include 3 → sol([1,2,3], i=3) ✅ print
// │   │   └── exclude 3 → sol([1,2], i=3)   ✅ print
// │   └── exclude 2 → sol([1], i=2)
// │       ├── include 3 → sol([1,3], i=3)   ✅ print
// │       └── exclude 3 → sol([1], i=3)     ✅ print
// └── exclude 1 → sol([], i=1)
//     ├── include 2 → sol([2], i=2)
//     │   ├── include 3 → sol([2,3], i=3)   ✅ print
//     │   └── exclude 3 → sol([2], i=3)     ✅ print
//     └── exclude 2 → sol([], i=2)
//         ├── include 3 → sol([3], i=3)     ✅ print
//         └── exclude 3 → sol([], i=3)      ✅ print


// Full Call Stack Trace (Line by Line with Indentation)
// We’ll simulate calls to help visualize the call stack. Let’s add indentation to reflect depth (i):

// scss
// Copy
// Edit
// sol([], i=0)
// ├─ include 1 → sol([1], i=1)
// │  ├─ include 2 → sol([1, 2], i=2)
// │  │  ├─ include 3 → sol([1, 2, 3], i=3) → print
// │  │  └─ exclude 3 → sol([1, 2], i=3)    → print
// │  └─ exclude 2 → sol([1], i=2)
// │     ├─ include 3 → sol([1, 3], i=3)    → print
// │     └─ exclude 3 → sol([1], i=3)       → print
// └─ exclude 1 → sol([], i=1)
//    ├─ include 2 → sol([2], i=2)
//    │  ├─ include 3 → sol([2, 3], i=3)    → print
//    │  └─ exclude 3 → sol([2], i=3)       → print
//    └─ exclude 2 → sol([], i=2)
//       ├─ include 3 → sol([3], i=3)       → print
//       └─ exclude 3 → sol([], i=3)        → print


//       Each function call:

// Goes down the left subtree first (include path)

// Then backtracks and explores the right (exclude path)


// Order of Calls in Stack (Chronological Execution)
// Here’s the chronological order of actual calls:

// scss
// Copy
// Edit
// sol([], 0)
// → sol([1], 1)
//   → sol([1, 2], 2)
//     → sol([1, 2, 3], 3) ✅ print
//     → sol([1, 2], 3)    ✅ print
//   → sol([1], 2)
//     → sol([1, 3], 3)    ✅ print
//     → sol([1], 3)       ✅ print
// → sol([], 1)
//   → sol([2], 2)
//     → sol([2, 3], 3)    ✅ print
//     → sol([2], 3)       ✅ print
//   → sol([], 2)
//     → sol([3], 3)       ✅ print
//     → sol([], 3)        ✅ print

//     Want to Visualize It?
// Add this to your function to watch calls live:

// cpp
// Copy
// Edit
// void sol(vector<int>& arr, vector<int> ans, int i) {
//     cout << "Calling sol(i=" << i << "): ";
//     for (int x : ans) cout << x << " ";
//     cout << endl;

//     if (i == arr.size()) {
//         cout << ">> Reached end: ";
//         for (int val : ans) cout << val << " ";
//         cout << endl;
//         return;
//     }

//     // Include
//     ans.push_back(arr[i]);
//     sol(arr, ans, i + 1);

//     // Exclude
//     ans.pop_back();
//     sol(arr, ans, i + 1);
// }
// Would you like a diagram (call stack arrows and everything), or see how it works for bigger arrays?


