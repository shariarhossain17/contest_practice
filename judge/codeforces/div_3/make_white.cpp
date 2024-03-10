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

    int i = 0, j = n - 1, w = 0, b = n - 1;

    int cnt = 0;
    while (i < n)
    {

        if (s[i] == 'B')
        {
            cnt++;

            if (s[j] == 'B')
            {
                break;
            }
            else
            {
                j--;
            }
        }
        if (cnt >= 1)
        {
            if (s[i] == 'W')
                cnt++;

            if (s[j] == 'B')
            {
                break;
            }
            else
            {
                j--;
            }
        }

        i++;
    }

    cout << j - i + cnt << endl;
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