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

    vi v(n), v1(n);

    array_input_int(v, 0, n);
    array_input_int(v1, 0, n);

    int a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] && !v1[i])
            a++;
        if (v1[i] && !v[i])
            b++;
    }

    if (!a)
    {
        cout << -1;
        return;
    }

    b++;
    cout << b / a + (b % a != 0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}