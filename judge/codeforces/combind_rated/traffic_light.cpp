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
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    string doubled_s = s + s;

    int ans = 0;
    int lastGreen = -1;

    for (int j = 2 * n - 1; j >= 0; j--)
    {
        if (doubled_s[j] == 'g')
        {
            lastGreen = j;
        }

        if (doubled_s[j] == c)
        {
            if (lastGreen != -1 && lastGreen < j + n)
            {
                ans = max(ans, lastGreen - j);
            }
        }
    }

    cout << ans << endl;
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
