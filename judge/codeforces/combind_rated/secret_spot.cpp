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

    int A = 0, B = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            A++;
            while (s[i] == 'A')
            {
                i++;
            }

            B++;
        }
        else
        {
            B++;
            while (s[i] == 'B')
            {
                i++;
            }

            A++;
        }
    }

        if (A == B)
    {
        cout << s[n - 1];
    }
    else if (A > B)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
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