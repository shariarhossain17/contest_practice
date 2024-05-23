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
    n *= 3;

    int val = n;

    int p3 = 0;

    vector<pair<int, int>> v;

    while (n % 6 != 0)
    {

        p3++;
        n -= 3;
    }

    p3 += n / 6;

    int p1 = 1;

    cout << p3 << endl;
    while (p3--)
    {
        cout << p1 << " " << val << endl;
        p1 += 3;
        val -= 3;
    }
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