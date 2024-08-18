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
    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    vector<int> fq(3, 0);

    for (int i = 0; i < n; i++)
    {
        fq[v[i] % 3]++;
    }

    int target = n / 3;
    int moves = 0;

    while (*min_element(fq.begin(), fq.end()) != target)
    {
        for (int i = 0; i < 3; i++)
        {
            if (fq[i] > target)
            {
                int excess = fq[i] - target;
                fq[i] -= excess;
                fq[(i + 1) % 3] += excess;
                moves += excess;
            }
        }
    }

    cout << moves << endl;
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
