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

    int cnt = 1;
    char f = s[0], b, t;

    int idx1, idx2;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == f)
            cnt++;
        else
        {
            idx1 = i;
            b = s[i];
            break;
        }
    }

    if (idx1 >= 0)
    {
        for (int i = idx1; i < s.size(); i++)
        {
            if (s[i] == b)
                cnt--;
            else
            {
                idx2 = i;
                t = s[i];
                break;
            }
        }
    }

    if (cnt != 0)
        No;
    else if (cnt == 0 and s.size() <= 2)
    {
        Yes;
    }
    else
    {
        int d = 0;

        char half = s[idx2];

        if (half != f)
        {
            No;
            return;
        }

        for (int i = idx2; i < s.size(); i++)
        {
            if (s[i] == f)
            {
                d++;
            }

            else
            {
                d--;
            }
        }

        if (d == 0)
            Yes;
        else
            No;
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