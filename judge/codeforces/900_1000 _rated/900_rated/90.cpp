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
    string s, t;
    cin >> s >> t;

    int i = s.size() - 1, j = t.size() - 1;

    // cout << j << endl;

    while (i > -1 and j > -1)
    {
        if (s[i] == t[j])
        {
            i--;
            j--;
        }

        else
            break;
    }

    cout << (i + j) + 2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}