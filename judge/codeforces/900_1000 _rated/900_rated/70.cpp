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
    int hash[105] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        hash[v[i]]++;
    }

    int x = -1, y = -1;

    for (int i = 0; i <= 105; i++)
    {
        if (hash[i] > 0)
            hash[i]--;
        else
        {
            x = i;
            break;
        }
    }

    for (int i = 0; i <= 105; i++)
    {
        if (hash[i] > 0)
            hash[i]--;
        else
        {
            y = i;
            break;
        }
    }

    cout << x + y;
    newLine;
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