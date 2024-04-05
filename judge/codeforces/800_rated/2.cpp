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
int solve()
{
    int a, b, c;

    cin >> a >> b >> c;

    int cnt = 0;
    vector<int> v;

    if ((a == 1 && b == 1) || (a == 1 && c == 1))
    {
        cnt++;
    }
    else if ((c == 1 && b == 1))
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    vi a;
    while (t--)
    {
        int cnt = solve();
        a.push_back(cnt);
    }

    int s = 0;

    for (int i = 0; i < a.size(); i++)
    {
        s += a[i];
    }

    cout << s << endl;
    return 0;
}
