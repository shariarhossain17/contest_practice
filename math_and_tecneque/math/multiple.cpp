#include <bits/stdc++.h>
using namespace std;
#include <iostream>

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

    // vector<int> ans;

    // for (int i = 0; i * i <= n; i++)
    // {

    //     if (n % i == 0)
    //     {

    //         ans.push_back(i);
    //         if (i == n / i)
    //             continue;
    //         ans.push_back(n / i);
    //     }
    // }

    // sort(ans.begin(), ans.end());

    // for (int i : ans)
    //     cout << i << " ";

    vector<vector<int>> divisors(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors[j].push_back(i);
        }
    }

    for (auto c : divisors)
    {

        for (auto j : c)
            cout << j << " "; // Print the actual divisor instead of _JBLEN

        cout << endl; // This replaces `newLine`
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