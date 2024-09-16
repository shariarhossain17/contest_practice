#include <bits/stdc++.h>
using namespace std;

#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> digits;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (digits.size() < 15)
            digits.push_back(x % 10);
    }
    int len = digits.size();
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            for (int k = j + 1; k < len; k++)
            {
                if ((digits[i] + digits[j] + digits[k]) % 10 == 3)
                {
                    Yes;
                    return;
                }
            }
        }
    }

    No;
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
