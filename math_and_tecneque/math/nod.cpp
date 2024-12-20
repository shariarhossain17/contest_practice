#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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

    int divisor = 1;

    for (int i = 2; i * i <= n; i++)
    {

        int power = 0;

        while (n % i == 0)
        {
            power++;
            n /= i;
        }

        divisor *= (power + 1);
    }

    if (n >= 2)
        divisor *= (1 + 1);

    cout << divisor;
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