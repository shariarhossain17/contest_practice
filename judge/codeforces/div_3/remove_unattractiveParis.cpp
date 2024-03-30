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

    map<char, int> fq;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        fq[s[i] - 'a']++;
        mx = max(fq[s[i] - 'a'], mx);
    }

    if (mx * 2 > n)
    {
        cout << mx * 2 - n << "\n";
    }
    else
    {
        cout << (n % 2) << "\n";
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