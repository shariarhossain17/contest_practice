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
    int n, t;

    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
            cout << "-1";
        else
        {
            cout << 1;
            for (int i = 0; i < n - 1; i++)
                cout << 0;
        }
    }
    else
        for (int i = 1; i <= n; i++)
            cout << t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}