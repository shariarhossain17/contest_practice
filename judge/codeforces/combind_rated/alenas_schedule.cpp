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

    int cnt = 0;

    int zero;

    if (v[0] == 0)
        zero = 1;
    else
        zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            zero++;
        else
        {
            if (zero < 2 and zero != 0)
            {
                cnt++;
            }

            zero = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            cnt++;
    }

    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}