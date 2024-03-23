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
    string s;
    cin >> s;

    int pos = s.size();

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] - '0' >= 5)
        {
            if (i == 0)
            {
                s = '1' + s;
                pos = i + 1;
            }
            else
            {
                s[i - 1]++;
                pos = i;
            }
        }
    }

    for (int j = pos; j < s.size(); j++)
    {
        s[j] = '0';
    }
    cout << s << endl;
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