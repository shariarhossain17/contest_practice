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

    vector<int> v(n);

    array_input_int(v, 0, n);

    int mx = 0, first = 0, last = 0, cnt = 0;

    int i = 0;
    int j = n - 1;

    while (true)
    {
        if (v[i] == 0)
        {
            break;
        }
        first++;
        i++;
    }
    while (true)
    {
        if (v[j] == 0)
        {
            break;
        }
        last++;
        j--;
    }

    mx = max(mx, first + last);

    for (int a = i; a < j; a++)
    {
        if (v[a] == 1)
            cnt++;
        else
        {
            cnt = 0;
        }

        mx = max(cnt, mx);
    }

    cout << mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}