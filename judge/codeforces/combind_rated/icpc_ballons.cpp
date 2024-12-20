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

    vector<bool> marked(26, false);

    int point = 0;

    for (int i = 0; i < n; i++)
    {
        int val = s[i] - 'A';

        if (!marked[val])
        {
            point += 2;
            marked[val] = true;
        }
        else
        {
            point += 1;
        }
    }

    cout << point << endl;
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