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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int misha = max(3 * a / 10, a - a / 250 * c);
    int vashya = max(3 * b / 10, b - b / 250 * d);

    if (misha > vashya)
        cout << "Misha\n";
    else if (misha < vashya)
        cout << "Vasya\n";
    else
        cout << "Tie\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}