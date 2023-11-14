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

    int n, m;
    cin >> n >> m;

    vector<ll> arr(n);

    array_input_int(arr, 0, n);

    ll i = 0, j = 0, s = 0, cnt = 0;

    while (i < n)
    {
        s += arr[i];

        while (s >= m)
        {
            if (s == m)
                cnt++;
            s -= arr[j];
            j++;
        }

        i++;
    }

    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}