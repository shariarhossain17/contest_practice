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

    vector<int> e, o;
    ll s1 = 0, s2 = 0;

    for (int i = 1; i <= n + 1; i++)
    {
        if (i % 2 == 0)
        {
            e.push_back(i);
            s1 += i;
        }
        else
        {
            o.push_back(i);
            s2 += i;
        }
    }

    bool flag = false;

    for (int i = 0; i < o.size(); i++)
    {
        if ((s2 - o[i]) == s1)
        {
            o.erase(o.begin() + i);
            flag = true;
            break;
        }
    }

    if (flag)
    {
        Yes;
        for (int i : e)
            cout << i << " ";
        for (int i : o)
            cout << i << " ";
        newLine;
    }
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