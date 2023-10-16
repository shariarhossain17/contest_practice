#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    vector<int> odd, even;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        if (ar[i] % 2 == 0)
            even.push_back(ar[i]);
        else
            odd.push_back(ar[i]);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    bool e = true;
    bool o = true;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
            continue;
        if (odd.empty() || odd[0] >= ar[i])
        {
            e = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
            continue;
        if (odd.empty() || odd[0] >= ar[i])
        {
            o = false;
            break;
        }
    }

    if (e || o)
        cout << "YES\n";
    else
        cout
            << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}