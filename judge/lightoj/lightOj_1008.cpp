#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, row, col, cases = 0;
    cin >> n;

    int sq = ceil(sqrt(n * 1.0));

    int x = (sq * sq) - n;

    if (x < sq)
    {
        row = sq;
        col = x + 1;
    }
    else
    {
        col = sq;
        row = (n) - ((sq - 1)) * ((sq - 1));

        cout << row;
    }

    if (sq & 1)
    {
        swap(x, sq);
    }
    cases++;

    cout << "Case"
         << " " << cases << ": " << col << " " << row;

    cout << endl;
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