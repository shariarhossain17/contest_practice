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
    string a, b;

    cin >> a >> b;

    if (a.size() < b.size())
    {
        string tmp;

        for (int i = 0; i < b.size() - a.size(); i++)
        {
            tmp += '0';
        }

        tmp += a;
        a = tmp;
    }
    else
    {
        string tmp;

        for (int i = 0; i < a.size() - b.size(); i++)
        {
            tmp += '0';
        }

        tmp += b;
        b = tmp;
    }

    if (a < b)
        cout << "<";
    else if (a > b)
        cout << ">";
    else
        cout << "=";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}