#include <bits/stdc++.h>
using namespace std;

#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    string s;
    cin >> s;

    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0')
    {
        i--;
    }

    string tmp = s.substr(0, i + 1);

    string reversed_tmp = tmp;
    reverse(reversed_tmp.begin(), reversed_tmp.end());

    if (tmp == reversed_tmp)
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
