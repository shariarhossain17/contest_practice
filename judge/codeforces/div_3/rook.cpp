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

    char c = s[0];
    int num = s[1] - '0';

    for (int i = num + 1; i <= 8; i++)
        cout << c << i << endl;
    for (int i = num - 1; i > 0; i--)
        cout << c << i << endl;
    for (char i = c + 1; i <= 'h'; i++)
        cout << i << num << endl;
    for (char i = c - 1; i >= 'a'; i--)
        cout << i << num << endl;
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