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
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    int a = n;
    int b = m;

    while (n % m != 0)
    {
        n++;
        m--;
        cnt++;
    }

    int result = cnt;

    cnt = 0;
    while (a % b != 0)
    {
        a--;
        b++;
        cnt++;
    }

    if (a == 0)
        cnt = 1e9;

    result = min(result, cnt);

    cout << result << "\n";
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