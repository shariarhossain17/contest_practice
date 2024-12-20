#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int countB = count(s.begin(), s.end(), 'B');

    if (countB == k)
    {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;

    if (countB > k)
    {

        int excessB = countB - k;
        int prefix = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'B')
            {
                --excessB;
            }
            if (excessB == 0)
            {
                prefix = i + 1;
                break;
            }
        }
        cout << prefix << " A" << endl;
    }
    else
    {

        int deficitB = k - countB;
        int prefix = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'A')
            {
                --deficitB;
            }
            if (deficitB == 0)
            {
                prefix = i + 1;
                break;
            }
        }
        cout << prefix << " B" << endl;
    }
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
