#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <iomanip>
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

    int first = -1, second = -1;
    bool f = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B' && !f)
        {
            first = i;
            f = true;
        }

        if (s[i] == 'B')
            second = i;
    }

    if (first == -1 && second == -1)
        cout << "0\n";
    else
        cout << (second - first) + 1 << endl;
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
