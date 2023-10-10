#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<long long int> v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
    vector<long long int> sum(n + 1, 0);
    vector<long long int> sort_sum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        sum[i + 1] = sum[i] + v[i];
        sort_sum[i + 1] = sort_sum[i] + v_sorted[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
        {
            cout << sum[r] - sum[l - 1] << endl;
        }
        else
        {
            cout << sort_sum[r] - sort_sum[l - 1] << endl;
        }
    }

    return 0;
}
