#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = k - 1, ans = INT_MAX;

    while (j < v.size())
    {

        ans = min(v[j] - v[i], ans);

        i++;
        j++;
    }

    cout << ans;

    return 0;
}