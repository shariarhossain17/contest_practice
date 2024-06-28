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
    int x;
    cin >> x;

    int cnt = 0;

    while (x > 0)
    {
        if (x % 2 == 0)
            x /= 2;
        else
        {

            cout << x << endl;
            x -= 1;
            cnt++;
        }
    }

    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}