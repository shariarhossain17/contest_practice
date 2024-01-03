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

void solve(int c)
{
    double r;
    cin >> r;

    double pi = 2 * acos(0.0);

    double result = (2 * r * 2 * r - (pi * r * r));
    cout << fixed << setprecision(2) << "Case " << c << ": " << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int cnt = 0;
    while (t--)
    {

        cnt++;
        solve(cnt);
    }

    return 0;
}