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
    vi b(n);

    array_input_int(b, 0, n);

    vi even;
    vi odd;

    for (int i = 0; i < n; i++)
    {
        if (b[i] % 2 == 0)
            even.push_back(b[i]);
        else
        {
            odd.push_back(b[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if (odd.size() % 2 != 0)
    {
        cout << -1 << "\n";
        return;
    }

    int el = 0;
    int er = even.size() - 1;

    vi ans;

    while (el <= er)
    {
        int x = (even[er] + even[el]) / 2;
        int y = (even[er] - even[el]) / 2;

        ans.push_back(x);
        ans.push_back(y);

        er--;
        el++;
    }

    int ol = 0;
    int Or = odd.size() - 1;
    while (ol <= Or)
    {
        int x = (odd[Or] + odd[ol]) / 2;
        int y = (odd[Or] - odd[ol]) / 2;

        ans.push_back(x);
        ans.push_back(y);

        Or--;
        ol++;
    }

    sort(ans.rbegin(), ans.rend());

    for (int i = 0; i < ans.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << ans[i];
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
