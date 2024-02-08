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

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int bit[33] = {0};

    for (int j = 0; j < 32; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] & (1 << j))
                bit[j]++;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        bool flag = true;

        for (int j = 0; j < 32; j++)
        {
            if (bit[j] % i != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << i << " ";
    }

    cout << endl;
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
