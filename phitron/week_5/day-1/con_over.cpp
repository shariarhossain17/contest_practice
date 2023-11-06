#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    while (cin >> n >> m)
    {
        int ar[n];

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int l = 0, r = INT_MAX, final_ans;

        while (l <= r)
        {
            int cap = l + (r - l) / 2;
            int container = 1;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {

                if (ar[i] > cap)
                {
                    container = INT_MAX;
                    break;
                }
                sum += ar[i];

                if (sum > cap)
                {
                    container++;
                    sum = ar[i];
                }
            }

            if (container <= m)
            {
                final_ans = cap;
                r = cap - 1;
            }
            else
            {
                l = cap + 1;
            }
        }

        cout << final_ans << "\n";
    }

    return 0;
}