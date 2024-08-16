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

void moesVoting()
{
    string s;
    cin >> s;

    int cnt = 0;
    char ans;

    for (int i = 0; i < s.size(); i++)
    {

        cout << ans << endl;

        if (cnt == 0)
            ans = s[i];

        if (s[i] == ans)
            cnt++;
        else
            cnt--;
    }

    // cout << ans << endl;
}
void solve()
{
    moesVoting();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}