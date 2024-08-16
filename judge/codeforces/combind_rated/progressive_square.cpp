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
    int n, c, d;

    cin >> n >> c >> d;

    vi v(n * n);

    array_input_int(v, 0, n * n);

    sort(v.begin(), v.end());

    vi leader;

    leader.push_back(v[0]);

    int l = v[0];

    vector<bool> marked(n * n, false);
    marked[0] = true;

    for (int i = 1; i < n * n; i++)
    {
        if (abs(v[i] - l) == d and leader.size() < n)
        {
            leader.push_back(v[i]);
            l = v[i];
            marked[i] = true;
        }
    }

    if (leader.size() != n)
    {
        No;
        return;
    }

    for (int i = 0; i < n; i++)
    {

        int le = leader[i];
        int cnt = 1;
        for (int j = 0; j < n * n; j++)
        {
            if (marked[j])
                continue;

            if (abs(le - v[j]) == c and cnt < n)
            {
                marked[j] = true;
                le = v[j];
                cnt++;
            }
        }
    }

    for (int i = 0; i < n * n; i++)
    {
        if (!marked[i])
        {
            No;
            return;
        }
    }

    Yes;
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