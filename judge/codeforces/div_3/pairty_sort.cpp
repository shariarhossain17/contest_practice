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
    vector<bool> idX(n, false);

    vi v(n);
    array_input_int(v, 0, n);

    vector<int> even, odd;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
            idX[i] = true;
        }
    }

    sort(even.begin(), even.end(), greater<>());
    sort(odd.begin(), odd.end(), greater<>());

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1)
        {
            v[i] = odd.back();
            odd.pop_back();
        }

        else
        {
            v[i] = even.back();
            even.pop_back();
        }
    }

    if (is_sorted(v.begin(), v.end()))
        Yes;
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