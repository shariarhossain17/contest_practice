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
    string s;
    cin >> s;

    int r, l;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            r = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            l = i;
            break;
        }
    }

    cout << (l - r) + 1 << endl;
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