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
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    while (n--)
    {
        string name, ip;

        cin >> name >> ip;

        mp[ip] = name;
    }

    while (m--)
    {
        string cmd, ip;
        cin >> cmd >> ip;

        ip.pop_back();

        auto it = mp.find(ip);
        if (it != mp.end())
        {
            string sv = it->second;
            cout << cmd << " " << ip << "; #" << sv;
            newLine;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;

    solve();

    return 0;
}