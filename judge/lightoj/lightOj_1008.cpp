#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{

    long long n, row, col;
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
    }

    if (sq & 1)
    {
        swap(x, sq);
    }

    cout << "Case"
         << " " << t << ": " << col << " " << row;

    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }
    return 0;
}