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

    string s;
    cin >> s;

    ll total_sum = 0;
    vi gains(n);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            total_sum += i;
            gains[i] = (n - i - 1) - i;
        }
        else
        {
            total_sum += (n - i - 1);
            gains[i] = i - (n - i - 1);
        }
    }

    sort(gains.begin(), gains.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (gains[i] > 0)
        {
            total_sum += gains[i];
        }
        cout << total_sum << " ";
    }

    newLine;
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
