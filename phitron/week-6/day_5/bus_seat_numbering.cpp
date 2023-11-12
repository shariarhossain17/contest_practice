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

    if (n <= 10)
    {
        cout << "Lower Double\n";
    }
    else if (n > 10 && n <= 15)
    {
        cout << "Lower Single\n";
    }
    else if (n > 15 && n <= 25)
    {
        cout << "Upper Double\n";
    }
    else
    {
        cout << "Upper Single\n";
    }
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