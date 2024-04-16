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
    int k, n, w;

    cin >> k >> n >> w;

    int total_cost = 0;
    for (int i = 1; i <= w; i++)
    {
        total_cost += i * k;
    }

    int result = total_cost - n;

    if (result <= 0)
        cout << 0;
    else
        cout << result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}