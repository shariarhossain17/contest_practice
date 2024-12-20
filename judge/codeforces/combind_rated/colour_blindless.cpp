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
    string s1, s2;

    cin >> s1 >> s2;

    for (int i = 0; i < n; i++)
    {
        if ((s1[i] == 'R') and (s2[i] == 'G') || (s1[i] == 'G') and (s2[i] == 'R'))
        {
            No;
            return;
        }
        else if ((s1[i] == 'R') and (s2[i] == 'B') || (s1[i] == 'B') and (s2[i] == 'R'))
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