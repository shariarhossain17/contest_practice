#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n, m, val;
    cin >> n >> m >> val;

    vi v(n);
    array_input_int(v, 0, n);

    int segments = 0;
    int segment_sum = 0;
    int alice_sum = 0;
    int j = 0;

    for (int i = 0; i < n; ++i)
    {
        segment_sum += v[i];

        if (segment_sum >= val)
        {
            segments++;
            int a = 0;

            while (segment_sum > val)
            {
                a += v[j];
                segment_sum -= v[j];
                j++;
            }

            alice_sum = max(a, alice_sum);

            if (segments == m)
            {
                for (int k = i + 1; k < n; ++k)
                {
                    alice_sum += v[k];
                }
                break;
            }
        }
    }

    if (segments < m)
    {
        cout << "-1\n";
    }
    else
    {
        cout << alice_sum << "\n";
    }
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
