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
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }

    int val = min(zero, one);

    cout << n - (val * 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}