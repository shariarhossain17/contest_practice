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

int fibo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibo(n - 2, dp) + fibo(n - 1, dp);
}
void solve()
{

    int n;
    cin >> n;

    // vector<int> dp(n + 1, -1);

    // cout << fibo(n, dp);

    vector<int> dp(n);

    // dp[0] = 0;
    // dp[1] = 1;

    // for (int i = 2; i <= n; i++)
    // {
    //     dp[i] = dp[i - 2] + dp[i - 1];
    // }

    // cout << dp[n] << endl;

    // reduce space complexity

    int prev = 0;
    int cur = 1;

    int fibo = 0;

    for (int i = 2; i <= n; i++)
    {

        fibo = prev + cur;

        prev = cur;
        cur = fibo;
    }

    cout << fibo;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}