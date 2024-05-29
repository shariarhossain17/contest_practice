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
    string s;
    cin >> s;

    int one = 0, four = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one = 1;
            four = 0;
        }
        else if (s[i] == '4' && one == 1)
        {
            four++;
            if (four > 2)
            {
                No;
                return;
            }
        }
        else
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

    solve();

    return 0;
}