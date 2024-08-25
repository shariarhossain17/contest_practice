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

    int alice = v[0], bob = 0;

    int i = 1, j = n - 1;

    int prev_alice = alice;
    int prev_bob = 0;
    int cnt = 1;

    while (i <= j)
    {
        if (prev_bob >= prev_alice)
        {
            prev_alice = 0;
            while (i <= j && prev_alice <= prev_bob)
            {
                prev_alice += v[i];
                i++;
            }
            alice += prev_alice;
            cnt++;
        }
        else
        {
            prev_bob = 0;
            while (i <= j && prev_bob <= prev_alice)
            {
                prev_bob += v[j];
                j--;
            }
            bob += prev_bob;
            cnt++;
        }
    }

    cout << cnt << " " << alice << " " << bob;
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
