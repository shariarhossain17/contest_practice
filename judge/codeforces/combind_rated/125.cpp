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

    sort(v.begin(), v.end());

    ll s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];

    double avg = round(static_cast<double>(s) / n);

    if (avg == 5)
        cout << 0 << "\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            int rem = abs(v[i] - 5);
            s += rem;
            avg = round(static_cast<double>(s) / n);
            if (avg == 5)
            {
                cout << i + 1;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
