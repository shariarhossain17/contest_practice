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

void solve(int c)
{

    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
            continue;
        sum += v[i];
    }

    cout << "Case 1 :" << sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int cnt = 0;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }

    return 0;
}