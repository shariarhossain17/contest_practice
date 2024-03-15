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
    string s;
    cin >> s;

    int frq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        frq[s[i] - 'A']++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - 'A';

        if (frq[c] >= c + 1)
        {
            cnt++;
            frq[c] = 0;
        }
    }

    cout << cnt << endl;
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