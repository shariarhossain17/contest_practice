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

    int cnt = 0;
    int op = 0;

    int j = -1;

    for (int i = 0; i < n; i++)

    {
        if (s[i] == '.')
        {
            cnt++;
        }
        else
            cnt = 0;

        if (cnt == 3)
        {

            break;
        }
    }

    if (cnt == 3)
        cout << "2\n";
    else
    {
        int op = 0;

        for (int i = 0; i < n; i++)
            if (s[i] == '.')
                op++;

        cout << op << endl;
    }
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
