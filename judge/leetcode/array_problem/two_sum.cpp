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

    int n, t;
    cin >> n >> t;
    vector<int> v(n);

    array_input_int(v, 0, n);

    vector<int> ans;
    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] + v[j] == t)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //         }
    //     }
    // }

    // optimal

    ll s = 0;
    int i = 0, j = 0;

    while (i < n and j < n)
    {
        s += v[j];
        while (s > t)
        {
            s -= v[i];
            i++;
        }

        if (s == t)
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }

        j++;
    }

    for (int i : ans)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}