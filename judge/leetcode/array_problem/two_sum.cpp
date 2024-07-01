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

    // better

    // map<int, int> mp;

    // for (int i = 0; i < n; i++)
    // {
    //     int need = t - v[i];

    //     if (mp.find(need) == mp.end())
    //     {
    //         mp[v[i]] = i;
    //     }

    //     else
    //     {
    //         cout << mp[need] << " " << i;
    //         return;
    //     }
    // }

    // better

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i << " " << endl;

    int i = 0, j = n - 1;

    while (i < j)
    {
        int s = v[i] + v[j];

        if (s == t)
        {
            cout << i << " " << j;
            return;
        }

        if (s > t)
            j--;
        else
            i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}