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

    int r = 0;
    int b = 0;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B' or s[i] == 'R')
        {
            v.push_back(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            int j = i + 1;
            while (s[j] == '?' and j < n)
            {

                if (j % 2 == 0)
                    s[j] = 'B';
                else
                    s[j] = 'R';
                j++;
            }

            i = j;
        }
        else if (s[i] == 'B')
        {

            int j = i + 1;
            while (s[j] == '?' and j <= n)
            {

                if (j % 2 == 0)
                    s[j] = 'R';
                else
                    s[j] = 'B';
                j++;
            }

            i = j;
        }
    }

    if (!v.empty())
    {
        for (int i = v[0] - 1; i >= 0; i--)
        {
            s[i] = (s[i + 1] == 'R') ? 'B' : 'R';
        }
    }

    if (s[n - 1] == '?')
    {
        if (s[n - 2] == 'R')
            s[n - 1] = 'B';
        else
        {
            s[n - 1] = 'R';
        }
    }

    cout << s;
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