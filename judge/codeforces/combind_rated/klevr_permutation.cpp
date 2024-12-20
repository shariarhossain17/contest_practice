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
    int k;
    cin >> k;

    int x = 1;

    vi ans(n);

    for (int i = 0; i < k; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j < n; j += k)
            {
                ans[j] = x;
                x++;
            }
        }
        else
        {
            int l = i;
            while (l + k < n)
            {
                l += k;
            }

            for (; l >= 0; l -= k)
            {
                ans[l] = x;
                x++;
            }
        }
    }

    for (auto i : ans)
        cout << i << " ";

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