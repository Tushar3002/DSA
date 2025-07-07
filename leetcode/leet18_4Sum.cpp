#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int p = j + 1, q = n - 1;

            while (p < q)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else if (sum == target)
                {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++, q--;
                    while (p < q && nums[p] == nums[p - 1])
                        p++;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> sol=fourSum(v,target);
    for(const auto& i:sol){
        for(int ans:i){
            cout << ans << " ";
            
        }cout << endl;
    }
    return 0;
}