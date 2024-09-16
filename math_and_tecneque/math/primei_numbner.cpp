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

    if (n <= 1)
    {
        No;
        return;
    }

    // bool is_prime = false;

    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //         is_prime = true;
    // }

    // if (is_prime)
    //     No;
    // else
    //     Yes;

    for (int i = 2; i <= n; i++)
    {

        bool is_prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << i << " ";
    }
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