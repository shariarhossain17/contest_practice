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

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }

    for (auto i : v)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    
    return 0;
}