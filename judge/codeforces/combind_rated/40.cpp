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

    if (s.size() == 1 and s[0] == 'n')
    {
        Yes;
        return;
    }

    int cnt = 0;
    bool f = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (i % 2 == 1)
        {
            if (s[i] != 'a' or s[i] != 'e' or s[i] != 'i' or s[i] != 'o' or s[i] != 'u')
            {
                f = false;
                break;
            }
        }
        if (s[i] == 'n')
            cnt++;
    }
    if (cnt > 0 and f)
        Yes;
    else
        No;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}