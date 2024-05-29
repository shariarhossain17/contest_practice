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

    vi v;

    int ans = 0, cnt = 0, pre_cnt = 0, pre = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a != pre)
        {
            pre_cnt = cnt;
            cnt = 1;
        }
        else
        {
            cnt++;
        }

        pre = a;
        ans = max(ans, 2 * min(cnt, pre_cnt));
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}