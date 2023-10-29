#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNum = 1;
    while (true)
    {
        int n, q;

        if (!(cin >> n >> q) || (n == 0 && q == 0))
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        cout << "CASE# " << caseNum << ":\n";
        caseNum++;

        for (int i = 0; i < q; i++)
        {
            int t;
            if (!(cin >> t))
                break;
            int l = 0;
            int r = n - 1;
            int ans = -1;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;

                if (v[mid] == t)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if (t > v[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (ans == -1)
                cout << t << " not found\n";
            else
                cout << t << " found at " << ans + 1 << "\n";
        }
    }

    return 0;
}
