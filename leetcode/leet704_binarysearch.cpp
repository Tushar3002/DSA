#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> v, int tar, int st, int end)
{
    if (st > end)
        return -1;
    int mid = st + (end - st) / 2;

    if (v[mid] == tar)
    {
        return mid;
    }
    else if (v[mid] < tar)
    {
        return sol(v, tar, mid + 1, end);
    }
    else
    {
        return sol(v, tar, st, mid - 1);
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 5, 6, 8, 9};
    int n = v.size();
    int tar = 3;

    cout << sol(v, tar, 0, n - 1);
    return 0;
}