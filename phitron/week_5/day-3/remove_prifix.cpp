#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    set<int> s;

    int visited = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(ar[i]);
        visited++;
        if (visited > s.size())
        {
            break;
        }
    }

    cout << n - s.size() << "\n";
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