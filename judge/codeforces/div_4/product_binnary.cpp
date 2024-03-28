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

    int diffCount = 0;
    char firstChar = s[0];

    for (int i = 0; i < n; i++)
    {
        if (s[i] != firstChar)
        {
            diffCount++;
            break;
        }
    }

    if (diffCount > 1)
    {
        cout << n << endl;
    }
    else
    {

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != firstChar)
            {
                pos = i;
                break;
            }
        }
        cout << pos + 1 << endl;
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