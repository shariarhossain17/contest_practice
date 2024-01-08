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

void solve(int t)
{
    int p, lp;

    cin >> p >> lp;

    int ground_floor = 0;
    int dest = lp - ground_floor;

    int total_d_second = dest * 4;
    int oc = 3 * 3;
    int ie = 5 * 2;

    cout << "Case " << t << ": " << total_d_second + oc + ie;
    cout << "\n";
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
}