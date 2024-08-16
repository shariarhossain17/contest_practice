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

const int mx = 1000007;

int ar[mx];

int sum_of_digit(int x)
{
    int s = 0;

    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
void solve()
{

    int x;
    cin >> x;
    cout << ar[x] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int i = 1; i <= mx; i++)
    {
        ar[i] = ar[i - 1] + sum_of_digit(i);
    }
    while (t--)
    {
        solve();
    }
    return 0;
}