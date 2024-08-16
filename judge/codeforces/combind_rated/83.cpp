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

    vi padel(n);
    array_input_int(padel, 0, n);
    int m;
    cin >> m;
    vi gear(m);
    array_input_int(gear, 0, m); // use m here

    int ans = 0;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (gear[j] % padel[i] == 0 && (gear[j] / padel[i] > mx))
            {
                mx = gear[j] / padel[i];
                ans = 1;
            }
            else if (gear[j] % padel[i] == 0 && (gear[j] / padel[i] == mx))
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
