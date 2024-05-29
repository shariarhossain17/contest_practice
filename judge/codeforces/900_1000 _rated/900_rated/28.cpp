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
    int x;
    vector<int> v, v1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            v.push_back(x);
        else
            v1.push_back(x);
    }
    int ans = 0;
    int z = 1;
    for (int i = 0; i < v.size(); i++)
    {
        ans += n - (i + 1);
    }
    int ans1 = 0;
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (__gcd(v1[i], v1[j]) > 1)
                ans++;
        }
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