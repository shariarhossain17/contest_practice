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
    int n, x;
    cin >> n >> x;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        mp[tmp] = 1;
    }
    for (int i = 1; i <= 201; i++)
    {
        if (mp[i] == 1)
            continue;
        else
        {
            if (x == 0)
            {
                cout << i - 1 << "\n";
                break;
            }

            x--;
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
