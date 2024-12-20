#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    vi ans;

    // for (int i = 0; i < n; i++)
    // {
    //     int val = v[i];
    //     int bi;
    //     cin >> bi;
    //     string s;
    //     cin >> s;

    //     for (int j = 0; j < bi; j++)
    //     {
    //         if (s[j] == 'U')
    //         {
    //             val = (val + 9) % 10;
    //         }
    //         else
    //         {
    //             val = (val + 1) % 10;
    //         }
    //     }

    //     ans.push_back(val);
    // }

    // for (auto i : ans)
    //     cout << i << " ";
    // newLine;

    for (int i = 1; i <= 1000; i++)
    {
        cout << i << ":sorry tomake boli nai\n";
    }
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
