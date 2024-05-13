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
    int n, even = 0, odd = 0;
    cin >> n;

    vi v(n);

    array_input_int(v, 0, n);

    int s = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        s += v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((s - v[i]) % 2 == 0)
            cnt++;
    }
    cout << cnt;
    newLine;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}