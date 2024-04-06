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

    int t;
    cin >> t;

    int x = 0;
    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'X')
                continue;

            if (s[i] == '+' && s[i + 1] == '+')
            {
                x++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                x--;
                        }
        }
    }

    cout << x;
    newLine;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}