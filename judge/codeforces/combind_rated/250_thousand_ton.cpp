#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_ll(a, o, n) \
    for (int i = o; i < n; i++) \
    {                           \
        cin >> (a[i]);          \
    }

void divisor_of_n(vector<int> &divisor, int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (n / i != i && n / i <= n / 2)
            {
                divisor.push_back(n / i);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> nums(n);
    array_input_ll(nums, 0, n);

    vi divisor;
    divisor_of_n(divisor, n);
    sort(divisor.begin(), divisor.end());

    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i - 1];
    }

    ll ans = *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());

    for (int i = 1; i < divisor.size(); i++)
    {
        int d = divisor[i];
        ll mx = LLONG_MIN, mn = LLONG_MAX;

        for (int j = d; j <= n; j += d)
        {

            ll sum = prefix[j] - prefix[j - d];

            mx = max(mx, sum);
            mn = min(mn, sum);
        }

        ans = max(ans, mx - mn);
    }

    cout << ans << endl;
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
