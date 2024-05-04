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
    vi v1, v2;

    int ans = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        if (x == 0)
            zero++;
        else if (x < 0)
            v1.push_back(x);
        else
            v2.push_back(x);
    }

    for (int i = 0; i < v1.size(); i++)
    {

        if (v1[i] == -1)
            continue;
        else
            ans += (-1 - (v1[i]));
    }

    for (int i = 0; i < v2.size(); i++)
    {

        ans += v2[i] - 1;
    }

    if (v1.size() == 1)
    {
        cout << ans + 2;
        return;
    }

    if ((!v1.empty() and !v2.empty()) and (v1.size() % 2 == 1 or v2.size() % 2 == 1))
        ans += 2;

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}