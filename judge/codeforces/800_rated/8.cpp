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

    string s2;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            continue;
        else
            s2 += s[i];
    }

    sort(s2.begin(), s2.end());
    string ans;

    for (int i = 0; i < s2.size() - 1; i++)
    {
        ans += s2[i];
        ans += '+';
    }

    ans += s2[s2.size() - 1];

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}