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
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = s;
    int carry = 1;

    for (int i = 0; i < n; i++)
    {
        if (carry == 0)
            break;

        if (s[i] == '1')
        {
            ans[i] = '0';
            carry = 1;
        }
        else
        {
            ans[i] = '1';
            carry = 0;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ans[i])
            cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
