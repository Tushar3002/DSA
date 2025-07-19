#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getPerm(vector<int> &nums, int idx, vector<vector<int>> &ans)
{
    if (idx == nums.size())
    {
        ans.push_back({nums});
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[idx], nums[i]);
        getPerm(nums, idx + 1, ans);

        swap(nums[idx], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    getPerm(nums, 0, ans);
    return ans;
}

int main(){
    vector<int> nums={1,2,3};
    
    vector<vector<int>> sol=permute(nums);
    for(auto i:sol){
        for(int j:i){
            cout << j << " ";
        }cout << endl;
    }
    return 0;
}

// 📍Step-by-Step Execution:
// getPerm(nums={1,2,3}, idx=0)

// swap nums[0] with nums[0] → {1,2,3}

// recurse idx=1

// swap nums[1] with nums[1] → {1,2,3}

// recurse idx=2

// swap nums[2] with nums[2] → {1,2,3}

// recurse idx=3 → push {1,2,3} into ans

// backtrack

// backtrack

// swap nums[1] with nums[2] → {1,3,2}

// recurse → push {1,3,2}

// backtrack

// backtrack

// swap nums[0] with nums[1] → {2,1,3}

// recurse → push {2,1,3}, {2,3,1}

// swap nums[0] with nums[2] → {3,2,1}

// recurse → push {3,2,1}, {3,1,2}


// 🧩 RECURSION TREE TRACE
// 🔹 Call: getPerm(nums, idx = 0)
// Current nums = {1, 2, 3}
// Loop: i = 0 → 2

// ▶ i = 0
// Swap idx=0 and i=0 → nums = {1, 2, 3}

// ➡️ Recurse: getPerm(nums, idx = 1)

// 🔸 Call: getPerm(nums, idx = 1)
// Current nums = {1, 2, 3}
// Loop: i = 1 → 2

// ▶ i = 1
// Swap idx=1 and i=1 → nums = {1, 2, 3}

// ➡️ Recurse: getPerm(nums, idx = 2)

// 🔹 Call: getPerm(nums, idx = 2)
// Current nums = {1, 2, 3}
// Loop: i = 2

// ####### ▶ i = 2

// Swap idx=2 and i=2 → nums = {1, 2, 3}

// ➡️ Recurse: getPerm(nums, idx = 3)

// ✅ idx == nums.size() → push {1, 2, 3} into ans

// 🔙 Backtrack swap idx=2 and i=2 → nums = {1, 2, 3}

// 🔙 Backtrack to idx = 2 → Done
// Back to loop in idx = 1

// ▶ i = 2
// Swap idx=1 and i=2 → nums = {1, 3, 2}

// ➡️ Recurse: getPerm(nums, idx = 2)

// ####### 🔹 Call: getPerm(nums, idx = 2)
// Loop: i = 2

// Swap idx=2 and i=2 → nums = {1, 3, 2}

// ➡️ Recurse: getPerm(nums, idx = 3)

// ✅ Push {1, 3, 2} into ans

// 🔙 Backtrack swap idx=2 and i=2 → nums = {1, 3, 2}

// 🔙 Backtrack swap idx=1 and i=2 → nums = {1, 2, 3}

// 🔙 Backtrack to idx = 1 complete
// Return to loop in idx = 0

// ▶ i = 1
// Swap idx=0 and i=1 → nums = {2, 1, 3}

// ➡️ Recurse: getPerm(nums, idx = 1)

// 🔸 Call: getPerm(nums, idx = 1)
// Loop: i = 1 → 2

// ▶ i = 1
// Swap idx=1 and i=1 → nums = {2, 1, 3}

// ➡️ Recurse: getPerm(nums, idx = 2)

// ####### 🔹 Call: getPerm(nums, idx = 2)

// Swap idx=2 and i=2 → nums = {2, 1, 3}

// ➡️ Recurse: getPerm(nums, idx = 3)

// ✅ Push {2, 1, 3}

// 🔙 Backtrack idx=2, i=2 → nums = {2, 1, 3}

// ▶ i = 2
// Swap idx=1 and i=2 → nums = {2, 3, 1}

// ➡️ Recurse → idx = 2

// Swap idx=2 and i=2 → nums = {2, 3, 1}

// ➡️ Recurse → idx = 3

// ✅ Push {2, 3, 1}

// 🔙 Backtrack idx=2, i=2 → nums = {2, 3, 1}

// 🔙 Backtrack idx=1, i=2 → nums = {2, 1, 3}

// 🔙 Backtrack idx=0, i=1 → nums = {1, 2, 3}

// ▶ i = 2
// Swap idx=0 and i=2 → nums = {3, 2, 1}

// ➡️ Recurse → idx = 1

// 🔸 Call: getPerm(nums, idx = 1)
// Loop: i = 1 → 2

// ▶ i = 1
// Swap idx=1 and i=1 → nums = {3, 2, 1}

// ➡️ Recurse → idx = 2

// Swap idx=2 and i=2 → nums = {3, 2, 1}

// ➡️ Recurse → idx = 3

// ✅ Push {3, 2, 1}

// 🔙 Backtrack idx=2 → nums = {3, 2, 1}

// ▶ i = 2
// Swap idx=1 and i=2 → nums = {3, 1, 2}

// ➡️ Recurse → idx = 2

// Swap idx=2 and i=2 → nums = {3, 1, 2}

// ➡️ Recurse → idx = 3

// ✅ Push {3, 1, 2}

// 🔙 Backtrack idx=2 → nums = {3, 1, 2}

// 🔙 Backtrack idx=1 → nums = {3, 2, 1}

// 🔙 Backtrack idx=0 → nums = {1, 2, 3}

// ✅ Final Output: ans contains
// cpp
// Copy
// Edit
// [
//   {1, 2, 3},
//   {1, 3, 2},
//   {2, 1, 3},
//   {2, 3, 1},
//   {3, 2, 1},
//   {3, 1, 2}
// ]

// [1, 2, 3]   ← Original input
//  ├── swap(0,0): [1, 2, 3]
//  │    └── idx = 1
//  │        ├── swap(1,1): [1, 2, 3]
//  │        │    └── idx = 2
//  │        │        ├── swap(2,2): [1, 2, 3] → ✅ Permutation
//  │        │        └── backtrack: [1, 2, 3]
//  │        └── swap(1,2): [1, 3, 2]
//  │             └── idx = 2
//  │                 ├── swap(2,2): [1, 3, 2] → ✅
//  │                 └── backtrack: [1, 3, 2]
//  │             └── backtrack: [1, 2, 3]
//  └── swap(0,1): [2, 1, 3]
//       └── idx = 1
//           ├── swap(1,1): [2, 1, 3]
//           │    └── idx = 2
//           │        ├── swap(2,2): [2, 1, 3] → ✅
//           │        └── backtrack: [2, 1, 3]
//           └── swap(1,2): [2, 3, 1]
//                └── idx = 2
//                    ├── swap(2,2): [2, 3, 1] → ✅
//                    └── backtrack: [2, 3, 1]
//                └── backtrack: [2, 1, 3]
//  └── swap(0,2): [3, 2, 1]
//       └── idx = 1
//           ├── swap(1,1): [3, 2, 1]
//           │    └── idx = 2
//           │        ├── swap(2,2): [3, 2, 1] → ✅
//           │        └── backtrack: [3, 2, 1]
//           └── swap(1,2): [3, 1, 2]
//                └── idx = 2
//                    ├── swap(2,2): [3, 1, 2] → ✅
//                    └── backtrack: [3, 1, 2]
//                └── backtrack: [3, 2, 1]
