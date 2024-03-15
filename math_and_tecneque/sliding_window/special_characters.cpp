#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            int cur = ar[i];

            while (cur >= 10)
            {
                int d = cur % 10;
                cur /= 10;
                result.push_back(d);
            }
        }
        else
        {
            result.push_back(ar[i]);
        }
    }

    bool sorted = true;
    for (int i = 0; i < result.size() - 1; i++)
    {
        if (result[i] > result[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "YES\n";
    else
        cout << "NO\n";
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