#include <iostream>
using namespace std;

int sum(int n)
{
    int s = 0;
    while (n)
    {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

void solve()
{
    int n;
    cin >> n;

    int count = 0;
    int candidate = 0;

    for (int i = 1;; ++i)
    {
        if (sum(i) == 10)
        {
            count++;
            if (count == n)
            {
                candidate = i;
                break;
            }
        }
    }

    cout << candidate << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
