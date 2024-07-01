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
//     int cnt = 1;
//     int cur = 0;
//     int ans = 1;

//     sort(v.begin(), v.end());

//     for (int i = 1; i < n; i++)
//     {

//         if (v[i - 1] == v[i])
//             cnt++;
//         else
//         {
//             cnt = 1;
//         }

//         if (cnt >= n / 2 and cur < cnt)
//         {
//             ans = v[i];
//             cur = cnt;
//         }
//     }

//     cout << ans;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }

// brute force
// void solve()
// {
//     int n;
//     cin >> n;
//     vi v(n);
//     array_input_int(v, 0, n);

//     map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         mp[v[i]]++;
//     }

//     int cur = 0;
//     int ans = 0;
//     for (auto it : mp)
//     {
//         if (it.second > cur)
//         {
//             cur = it.second;
//             ans = it.first;
//         }
//     }

//     cout << ans;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }

// optimal

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    int cnt = 0, el;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            el = v[i];
        }

        if (el == v[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == el)
            cnt++;
    }

    if (v.size() / 2 >= c1)
        cout << el;
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;

    solve();

    return 0;
}