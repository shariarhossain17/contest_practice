#include <bits/stdc++.h>
using namespace std;

bool solve(int idx, int s, vector<int> &ds, vector<int> &v, int t, int n)
{
    if (idx == n)
    {
        if (s == t)
        {
            for (int i : ds)
                cout << i << " ";

            return true;
        }

        return false;
    }

    // take

    ds.push_back(v[idx]);
    s += v[idx];
    if (solve(idx + 1, s, ds, v, t, n) == true)
        return true;

    // not take
    ds.pop_back();
    s -= v[idx];
    if (solve(idx + 1, s, ds, v, t, n) == true)
        return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> v(n), ds;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    solve(0, 0, ds, v, t, n);

    return 0;
}