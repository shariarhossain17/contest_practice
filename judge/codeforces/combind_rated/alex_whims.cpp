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

    int n, q;
    cin >> n >> q;

    for (int i = 1; i < n; i++)
    {
        cout << i << " " << i + 1 << endl;
    }

    int u = 1, v = 2, currentIdx = n - 1;

    while (q--)
    {
        int d;
        cin >> d;

        if (currentIdx == d)
            cout << "-1 -1 -1\n";
        else
        {
            cout << u << " " << v << " " << n - d + 1 << endl;

            v = n - d + 1;
            currentIdx = d;
        }
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