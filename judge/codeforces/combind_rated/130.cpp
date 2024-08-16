#include <iostream>
using namespace std;

#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    while (true)
    {
        if (a == b)
        {
            Yes;
            return;
        }
        if (a == x || b == y)
        {
            No;
            return;
        }
        a = (a % n) + 1;
        b = (b - 2 + n) % n + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
