#include <bits/stdc++.h>
using namespace std;

void combinationSum(int i, int n, int t, int arr[], vector<int> &ds)
{
    if (i == n)
    {
        if (t == 0)
        {

            sort(ds.begin(), ds.end());
            for (int i : ds)
                cout << i << " ";
            cout << "\n";
        }
        return;
    }

    if (arr[i] <= t)
    {
        ds.push_back(arr[i]);
        combinationSum(i, n, t - arr[i], arr, ds);
        ds.pop_back();
    }

    combinationSum(i + 1, n, t, arr, ds);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 7, t = 8;
    int arr[n] = {10, 1, 2, 7, 6, 1, 5};

    vector<int> ds;

    combinationSum(0, n, t, arr, ds);
    return 0;
}