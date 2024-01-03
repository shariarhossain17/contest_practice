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

void solve(int t)
{
    int n, m;
    cin >> n >> m;

    if (n == 1 or m == 1)
        cout << "Case " << t << ": " << max(n, m);
    else if (n == 2 or m == 2)
        cout << "Case " << t << ": " << (((n * m) / 8) * 4 + (n * m) % 8 >= 4) ? 4 : ((m * n) % 8);
    else
        cout << "Case " << t << ": " << (n * m + 1) / 2;

    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;

        solve(cnt);
    }

    return 0;
}