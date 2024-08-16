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

    int twenty_five = 0;
    int fifty = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 25)
        {
            twenty_five++;
        }
        else if (v[i] == 50)
        {
            if (twenty_five > 0)
            {
                twenty_five--;
                fifty++;
            }
            else
            {
                No;
                return;
            }
        }
        else if (v[i] == 100)
        {
            if (fifty > 0 && twenty_five > 0)
            {
                fifty--;
                twenty_five--;
            }
            else if (twenty_five >= 3)
            {
                twenty_five -= 3;
            }
            else
            {
                No;
                return;
            }
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
