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
    vi v(3);
    vi v1(3);
    vi v2(3);

    array_input_int(v, 0, 3);
    array_input_int(v1, 0, 3);
    array_input_int(v2, 0, 3);

    int s1 = accumulate(v.begin(), v.end(), 0);
    int s2 = accumulate(v1.begin(), v1.end(), 0);
    int s3 = accumulate(v2.begin(), v2.end(), 0);

    int ans = INT_MIN;
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