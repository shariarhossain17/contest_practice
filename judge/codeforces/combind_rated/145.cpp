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

int binarySearch(int x, vector<int> &v)
{
    int l = 1;
    int r = 2000000000;
    int best_mid = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        ll sum = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < mid)
                sum += (mid - v[i]);
        }

        if (sum <= x)
        {
            best_mid = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return best_mid;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vi v(n);
    array_input_int(v, 0, n);

    int result = binarySearch(x, v);
    cout << result << endl;
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
