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

    int alice = 0;
    int bobs = 0;

    if (s[0] == 'A')
        alice++;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'B' && s[i - 1] == 'A')
        {
            continue;
        }
        else if (s[i] == 'B' && s[i - 1] == 'B')
        {
            bobs++;
        }
        else if (s[i] == 'A' && s[i - 1] == 'B')
        {
            continue;
        }
        else if (s[i] == 'A' && s[i - 1] == 'A')
        {
            alice++;
        }
    }

    cout << alice << " " << bobs << endl;
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