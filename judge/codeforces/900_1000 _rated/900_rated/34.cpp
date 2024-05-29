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

bool con(char c)
{
    return c != 'a' and c != 'e';
}

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {

        {
            if (con(s[i]))
            {
                if (i > 0 and con(s[i - 1]))
                {
                    cout << '.';
                }
                else if (i > 0 and i < n - 1 and !con(s[i + 1]))
                {
                    cout << '.';
                }
            }
            cout << s[i];
        }
    }

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