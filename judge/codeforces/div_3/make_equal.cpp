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

    int res = 0;
    s = s / n;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > s)
        {

            res += v[i] - s;
            v[i] = s;
        }

        else
        {

            if (res > 0)
            {
                int tmp = s - v[i];

                if (res >= tmp)
                {
                    res = abs(res - tmp);

                    v[i] = v[i] + tmp;
                }
            }
        }
    }

    bool flag = false;

    for (int i : v)
    {
        if (i != s)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        No;
    else
        Yes;
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