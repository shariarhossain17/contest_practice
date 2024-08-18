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

    int cnt = 0;
    while (n > 1)
    {
        if (k >= 5 * n)
        {
            k -= 5;
        }

        else if (k >= 4 * n)
        {
            k -= 4;
        }

        else if (k >= 3 * n)
        {
            k -= 3;
        }
        else
        {
            k -= 2;
            cnt++;
        }

        n--;
    }

    if (k == 2)
        cnt++;

    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}