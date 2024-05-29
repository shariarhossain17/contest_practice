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
    string inp;
    cin >> inp;
    vector<string> ans;
    string tt;
    for (int i = 0; i < inp.size(); i++)
    {
        if (inp.substr(i, 3) == "WUB")
        {
            if (tt != "")
                ans.pb(tt);
            tt = "";
            i += 2;
        }
        else
        {
            tt += inp[i];
        }
    }
    if (tt != "")
        ans.pb(tt);
    for (int i = 0; i < ans.size(); i++)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}