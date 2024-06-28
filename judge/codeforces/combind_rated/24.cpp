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
    int da, db;
    cin >> da >> db;

    if (db == da)
        cout << da << "1" << " " << da << "2";
    else if (db == da + 1)
        cout << da << "9 " << db << "0";
    else if (da == 9 and db == 1)
        cout << "9 10\n";
    else
        cout << "-1";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}