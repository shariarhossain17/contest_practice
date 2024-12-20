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

    vi num1(n), num2(n);

    num1[0] = m;

    array_input_int(num1, 1, n);

    array_input_int(num2, 0, n);

    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());

    int i = 0, j = 0, cnt = 0;

    while (j < n)
    {
        if (num1[i] < num2[j])
        {
            i++;
            j++;
        }
        else
        {
            cnt++;
            j++;
        }
    }

    cout << cnt;
    newLine;
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