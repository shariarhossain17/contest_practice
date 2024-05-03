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

    string r, l;

    for (int i = n - 1; i >= 0; i -= 2)
    {

        if (i == 0)
            r += s[0];
        else
        {
            r += s[i - 1];
            l += s[i];
        }
    }

    reverse(l.begin(), l.end());

    cout << r << l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}