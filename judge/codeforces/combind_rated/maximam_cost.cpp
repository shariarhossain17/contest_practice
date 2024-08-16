#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    int max_points = 0;
    int current_length = 1;

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            ++current_length;
        }
        else
        {

            max_points += a * current_length + b;
            current_length = 1;
        }
    }
    max_points += a * current_length + b;

    cout << max_points << "\n";
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
