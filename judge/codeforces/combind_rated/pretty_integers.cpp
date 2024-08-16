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
    int n, m;
    cin >> n >> m;

    vector<int> list(n), list2(m);

    array_input_int(list, 0, n);
    array_input_int(list2, 0, m);

    int common = INT_MAX;

    int mini_1 = INT_MAX;
    int mini_2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mini_1 = min(list[i], mini_1);
            mini_2 = min(list2[j], mini_2);
            if (list[i] == list2[j])
            {
                common = min(common, list[i]);
            }
        }
    }

    if (common != INT_MAX)
        cout << common << endl;
    else
        cout << min(mini_1, mini_2) << max(mini_1, mini_2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}