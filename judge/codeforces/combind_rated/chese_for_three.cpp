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

    vi v(n);

    array_input_int(v, 0, n);

    if (v[0] == 3)
    {
        No;
        return;
    }

    vector<int> player;

    player.push_back(1);
    player.push_back(2);
    player.push_back(3);

    int looser;

    if (v[0] == 1)
        looser = 2;
    else if (v[0] == 2)
        looser = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == looser)
        {
            No;
            return;
        }
        else
        {
            vi rem;

            for (int i = 0; i < 3; i++)
            {
                if (i + 1 != looser)
                    rem.push_back(i + 1);
            }

            if (rem[0] == v[i])
                looser = rem[1];
            else if (rem[1] == v[i])
                looser = rem[0];
        }
    }

    Yes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}