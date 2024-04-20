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
    int a, b;
    cin >> a >> b;

    int i = 1;

    int s = 0;
    while (true)
    {
        s += a;

        if (s % 10 == 0 || s % 10 == b)
        {
            cout << i;
            newLine;
            break;
        }
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}