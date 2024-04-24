#include <bits/stdc++.h>
using namespace std;

int solve(int idx, int s, vector<int> &v, int t, int n)
{

    if (s > t)
        return 0;
    if (idx == n)
    {
        if (t == s)
        {
            return 1;
        }
        return 0;
    }

    s += v[idx];

    int l = solve(idx + 1, s, v, t, n);

    s -= v[idx];

    int r = solve(idx + 1, s, v, t, n);

    return l + r;
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

    int cnt = solve(0, 0, v, t, n);

    cout << cnt;

    return 0;
}