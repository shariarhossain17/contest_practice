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

// better
// void solve()
// {
//     int n;
//     cin >> n;

//     vi v(n);

//     array_input_int(v, 0, n);

//     int sum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         int s = 0;
//         for (int j = i; j < n; j++)
//         {

//             s += v[j];
//             sum = max(sum, s);
//         }
//     }

//     cout << sum << endl;
// }

// optimal
void solve()
{
    int n;
    cin >> n;

    vi v(n);

    array_input_int(v, 0, n);

    ll maxi = INT_MIN;

    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        s += v[i];

        if (s > maxi)
        {
            maxi = s;
        }

        if (s < 0)
            s = 0;
    }

    cout << maxi << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}