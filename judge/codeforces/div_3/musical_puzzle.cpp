#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine "\n"
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

    set<string> unique;

    for (int i = 0; i < n - 1; i++)
    {
        string tmp = "";

        tmp += s[i];
        tmp += s[i + 1];

        unique.insert(tmp);
    }

    cout << unique.size() << newLine;
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