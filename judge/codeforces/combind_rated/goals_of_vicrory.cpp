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

    int s = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        s += (x);
    }

    if (s == 0)
    {
        cout << 0;
        newLine;
        return;
    }

    string str = to_string(s);
    cout << (str[0] == '-' ? str.substr(1) : '-' + str);
    newLine;
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