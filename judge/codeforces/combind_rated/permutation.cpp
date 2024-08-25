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

    if (n == 1 or n == 2 or n == 3)
    {
        cout << "-1\n";

        return;
    }

    vector<int> odd, even;

    for (int i = n; i >= 0; i--)
    {
        if (i % 2 == 1)
            odd.push_back(i);
    }

    for (int i = 2; i <= n; i += 2)
        even.push_back(i);

    for (auto i : odd)
    {
        if (i == 5 and n >= 5)
            cout << 3 << " ";
        else if (i == 3 and n >= 5)
            cout << 5 << " ";
        else
            cout << i << " ";
    }
    for (auto i : even)
    {
        if (i == 0)
            continue;
        else if (i == 2)
            cout << 4 << " ";
        else if (i == 4)
            cout << 2 << " ";
        else
            cout << i << " ";
    }

    newLine;
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