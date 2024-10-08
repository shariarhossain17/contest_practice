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

    vi v(n);

    array_input_int(v, 0, n);

    vi neg, pos, ans;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
            neg.push_back(v[i]);
        else
            pos.push_back(v[i]);
    }

    for (int i = 0; i < neg.size(); i++)
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }

    for (int i : ans)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}