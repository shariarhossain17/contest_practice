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

    int first = -1;
    int last = -1;

    int mini = INT_MAX;

    sort(v.begin(), v.end());

    if (n == 2)
    {
        cout << v[0] << " " << v[1];
        newLine;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) < mini)
        {

            first = i;

            mini = abs(v[i] - v[i - 1]);
        }
    }

    for (int i = first; i < n; i++)
        cout << v[i] << " ";
    for (int i = 0; i < first; i++)
        cout << v[i] << " ";

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