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
    int n, d;
    cin >> n >> d;
    vi v(n);
    array_input_int(v, 0, n);
    sort(v.begin(), v.end());

    int s = 0;
    int jokes = 0;

    for (int i = 0; i < n - 1; i++)
    {
        s += (v[i]) + 10;
        jokes += 2;
    }

    int rem = d - s;

    bool flag = true;

    if (rem > 0 && v[n - 1] <= rem)
    {
        rem -= v[n - 1];
        if (rem >= 5)
            jokes += (rem / 5);
    }
    else
        flag = false;

    if (flag)
        cout << jokes;
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}