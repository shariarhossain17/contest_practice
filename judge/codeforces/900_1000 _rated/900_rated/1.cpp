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

    int cnt = 0;
    bool flag = false;

    for (int i = 0; i < s.size(); i++)
    {

        for (int j = i; j < s.size(); j++)
        {
            if (s[i] != s[j])
                break;
            else
                cnt++;
        }

        if (cnt >= 7)
            flag = true;
        else
            cnt = 0;
    }

    if (flag)
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