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
    int n, c;
    cin >> n >> c;
    vi v(n);
    array_input_int(v, 0, n);

    vector<int> tmp;

    for (int i = 0; i < n; i++)
    {

        tmp.push_back(v[i] + i + 1);
    }

    sort(tmp.begin(), tmp.end());

    int t = 0;

    for (int i = 0; i < n; i++)
    {
        if (c < tmp[i])
            break;
        else
        {
            t++;
            c -= tmp[i];
        }
    }

    cout << t << endl;
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
