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
    int k;
    cin >> k;
    string s;
    cin >> s;

    map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }

    string t = "";

    for (auto i : mp)
    {
        if (i.second % k != 0)
        {
            cout << "-1";
            return;
        }
        t += string(i.second / k, i.first);
    }

    for (int i = 0; i < k; i++)
    {
        cout << t;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
