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

int factor(int n)
{
    vector<int> d;

    int cnt = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            cnt++;
            if (n / i != i)
            {
                d.push_back(n / i);
                cnt++;
            }
        }

        if (cnt == 4)
            break;
    }

    sort(d.begin(), d.end());

    return d[1];
}

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        int f = factor(n);
        n += f;
    }

    cout << n << endl;
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