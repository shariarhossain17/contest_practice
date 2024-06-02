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
    vector<int> numbers = {4,
                           7,
                           44,
                           47,
                           74,
                           77,
                           444,
                           447,
                           474,
                           477,
                           744,
                           747,
                           774,
                           777};

    for (int i = 0; i < 15; i++)
    {
        if (n % numbers[i] == 0)
        {
            Yes;
            return;
        }
    }
    No;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
