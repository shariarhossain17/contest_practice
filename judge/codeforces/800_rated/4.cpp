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
    int n, k;
    cin >> n >> k;

    vi a(n);
    array_input_int(a, 0, n);

    int s = a[k - 1];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            continue;

        if (a[i] >= s)
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