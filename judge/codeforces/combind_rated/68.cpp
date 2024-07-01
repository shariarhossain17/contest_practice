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
    int n, k;

    cin >> n >> k;

    int s = n - k;

    if (s % 2 == 1 and n % 2 == 0)
    {

        int last = n - (k - 1) * 2;

        if (last <= 0)
            No;

        else
        {
            Yes;
            for (int i = 1; i <= k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << last << " ";
            newLine;
        }
    }
    else if (s % 2 == 0)
    {
        int last = n - (k - 1) * 1;

        if (last <= 0)
        {
            No;
        }
        else
        {
            Yes;

            for (int i = 1; i < k; i++)
                cout << 1 << " ";

            cout << last << " ";
            newLine;
        }
    }
    else
        No;
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