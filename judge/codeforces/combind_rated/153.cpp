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
    vi v(n);

    array_input_int(v, 0, n);

    int i = 0, j = n - 1;

    int alice = v[0], bob = v[n - 1];

    int ans = 0;
    while (i < j)
    {

        if (alice == bob)
        {
            ans = max(ans, (i + 1) + (n - j));
        }
        if (alice <= bob)
        {
            i++;
            alice += v[i];
        }
        else if (bob < alice)
        {
            j--;
            bob += v[j];
        }
    }

    cout << ans << endl;
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
