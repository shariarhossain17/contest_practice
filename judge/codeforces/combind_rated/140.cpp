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

    sort(v.begin(), v.end());

    int i = 0, j = n - 1;

    vector<int> ans;

    while (i <= j)
    {
        if (i == j)
        {
            ans.push_back(v[i]);
        }
        else
        {
            ans.push_back(v[i]);
            ans.push_back(v[j]);
        }

        i++;
        j--;
    }

    reverse(ans.begin(), ans.end());

    for (auto i : ans)
        cout << i << " ";

    cout << endl;
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
