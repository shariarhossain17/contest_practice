#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int total = 0;
    int change = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int l = i;
        int r = n - i - 1;

        if (s[i] == 'L')
        {
            if (r > l)
            {
                change++;
                total += r;
                v.push_back(r - l);
            }
            else
            {
                total += l;
            }
        }
        else
        {
            if (l > r)
            {
                change++;
                total += r;
                v.push_back(l - r);
            }
            else
            {
                total += r;
            }
        }
    }

    vector<int> ans(n + 1);

    for (int i = change; i <= n; i++)
    {
        ans[i] = total;
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = change; i >= 1; i--)
    {
        total -= v.back();
        v.pop_back();
        ans[i] = total;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
