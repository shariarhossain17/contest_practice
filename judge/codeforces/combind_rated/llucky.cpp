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

int sum(int n)
{

    int s = 0;

    while (n)
    {
        s += n % 10;
        n /= 10;
    }

    return s;
}
void solve()
{
    string s;
    cin >> s;

    int s1 = stoi(s.substr(0, 3));
    int s2 = stoi(s.substr(3, s.size()));

    if (sum(s1) == sum(s2))
        Yes;
    else
        No;
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