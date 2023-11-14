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
    bool semi = 1;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int odd = 0, even = 0;
    for (auto it : m)
    {
        if (it.second % 2 != 0)
            odd++;
        else
            even++;
    }
    if ((n % 2 && odd > 1) || (n % 2 == 0 && odd))
        semi = 0;

    if (!semi)
        cout << 0 << endl;
    else
    {
        if (n % 2 == 0 || (n % 2 and m.size() >= 2))
            cout << 1 << endl;
        else
            cout << 2 << endl;
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