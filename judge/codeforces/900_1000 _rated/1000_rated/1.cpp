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

bool isVowel(char a)
{
    if (a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u' or a == 'y')
    {
        return true;
    }

    return false;
}

void solve()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::towlower);

    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isVowel(s[i]))
        {
            ans += '.';
            ans += s[i];
        }
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}