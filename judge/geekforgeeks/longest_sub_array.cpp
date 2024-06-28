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

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int idx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += ar[j];
            if (s == k)
            {
                idx = max(idx, j - i + 1);
            }
        }
    }

    cout << idx << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}