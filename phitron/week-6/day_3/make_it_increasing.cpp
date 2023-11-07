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

    int ar[n];

    array_input_int(ar, 0, n);

    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (ar[i] != 0 && ar[i] >= ar[i + 1])
        {
            ar[i] /= 2;
            cnt++;
        }
        if (ar[i] >= ar[i + 1] || ar[i] == 0 && i > 0)
        {
            cnt = -1;
            break;
        }
    }

    cout << cnt;
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
