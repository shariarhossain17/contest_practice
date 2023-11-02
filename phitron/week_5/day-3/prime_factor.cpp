#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "Bob\n";
    else if (n & 1)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
