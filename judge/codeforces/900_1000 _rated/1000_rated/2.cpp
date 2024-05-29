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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int x = 0;
    int y = 0;
    int z = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        x += a;
        y += b;
        z += c;
    }
    if (x == 0 and y == 0 and z == 0)
        Yes;
    else
        No;
    return 0;
}