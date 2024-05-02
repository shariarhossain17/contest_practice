#include <bits/stdc++.h>

using namespace std;

void solve(int idx, int t, int ar[], vector<int> &ds)
{

    if (t == 0)
    {
        for (int i : ds)
            cout << i << " ";
        cout << "\n";
        return;
    }

    for (int i = idx; i < 5; i++)
    {
        if (i > idx && ar[i] == ar[i - 1])
            continue;

        if (ar[i] > t)
            break;

        ds.push_back(ar[i]);
        solve(idx + 1, t - ar[i], ar, ds);
        ds.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ar[5] = {1, 1, 1, 2, 2};
    vector<int> ds;
    solve(0, 4, ar, ds);
    return 0;
}