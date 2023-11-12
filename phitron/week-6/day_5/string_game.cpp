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

    if (n == 1)
    {
        cout << "Ramos\n";
        return;
    }

    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        else
            two++;
    }

    int flag = min(one, two);

    if (flag % 2 == 0)
        cout << "Ramos\n";
    else
        cout << "Zlatan\n";
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