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
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B >= A)
    {
        cout << B << endl;
    }
    else
    {
        if (C <= D)
        {
            cout << -1 << endl;
        }
        else
        {
            long long rem = A - B;
            long long rept = (rem + (C - D) - 1) / (C - D);
            cout << B + rept * C << endl;
        }
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