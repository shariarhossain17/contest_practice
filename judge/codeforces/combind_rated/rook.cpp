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

    for (int i = '1'; i < '9'; i++)
    {

        if (i == s[1])
            continue;
        cout << s[0] << i - '0' << endl;
    }

    for (char i = 'a'; i <= 'h'; i++)
    {

        if (i == s[0])
            continue;

        cout << i << s[1] << endl;
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