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
    int n, k;
    cin >> n >> k;
    vector<int> fq(100, 0);

    while (n--)
    {
        int l, r;
        cin >> l >> r;

        if (l <= k and r >= k)
        {
            fq[l]++;
            fq[r + 1]--;
        }
    }

    for (int i = 1; i <= 51; i++)
    {
        fq[i] += fq[i - 1];
    }

    if (fq[k] > fq[k - 1] and fq[k] > fq[k + 1])
        Yes;
    else
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