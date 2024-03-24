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

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        s += v[i];
    }

    int rem = 0;

    bool flag = true;

    int target = s / n;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
            continue;

        if (v[i] > target)
        {
            if (rem >= 0)
            {

                rem = rem + (v[i] - target);
            }
        }
        else
        {
            rem = rem - (target - v[i]);
        }
    }

    if (rem == 0)
        Yes;
    else
        No;
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