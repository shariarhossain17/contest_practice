#include <bits/stdc++.h>
using namespace std;
#include <iostream>

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

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     vi v(n);
//     array_input_int(v, 0, n);

//     vector<long long> marked(n - 1, 0);

//     for (int i = 1; i <= k; i++)
//     {
//         long double maxLen = -1;
//         int idx = -1;

//         for (int j = 0; j < n - 1; j++)
//         {
//             long double d = v[j + 1] - v[j];
//             long double length = d / (long double)(marked[j] + 1);

//             if (length > maxLen)
//             {
//                 maxLen = length;
//                 idx = j;
//             }
//         }
//         marked[idx]++;
//     }

//     long double ans = -1;

//     for (int i = 0; i < n - 1; i++)
//         cout << marked[i] << " ";
//     newLine;
//     for (int i = 0; i < n - 1; i++)
//     {
//         long double dif = (v[i + 1] - v[i]) / (long double)(marked[i] + 1);
//         ans = max(dif, ans);
//     }

//     cout << ans << endl;
// }

#include <bits/stdc++.h>
using namespace std;
#include <iostream>

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

// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     vi v(n);
//     array_input_int(v, 0, n);

//     vector<long long> marked(n - 1, 0);

//     for (int i = 1; i <= k; i++)
//     {
//         long double maxLen = -1;
//         int idx = -1;

//         for (int j = 0; j < n - 1; j++)
//         {
//             long double d = v[j + 1] - v[j];
//             long double length = d / (long double)(marked[j] + 1);

//             if (length > maxLen)
//             {
//                 maxLen = length;
//                 idx = j;
//             }
//         }
//         marked[idx]++;
//     }

//     long double ans = -1;

//     for (int i = 0; i < n - 1; i++)
//         cout << marked[i] << " ";
//     newLine;
//     for (int i = 0; i < n - 1; i++)
//     {
//         long double dif = (v[i + 1] - v[i]) / (long double)(marked[i] + 1);
//         ans = max(dif, ans);
//     }

//     cout << ans << endl;
// }

void solve()
{
    int n, k;
    cin >> n >> k;

    vi ar(n);
    array_input_int(ar, 0, n);

    priority_queue<pair<long double, int>> pq;
    for (int i = 0; i < n - 1; i++)
    {
        pq.push({ar[i + 1] - ar[i], i});
    }

    vector<int> section(n - 1, 0);

    for (int i = 1; i <= k; i++)
    {
        pair<long double, int> val = pq.top();
        pq.pop();

        section[val.second]++;
        long double dif = ar[val.second + 1] - ar[val.second];
        long double new_val = dif / (long double)(section[val.second] + 1);

        pq.push({new_val, val.second});
    }

    long double ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        long double dif = (ar[i + 1] - ar[i]) / (long double)(section[i] + 1);
        ans = max(ans, dif);
    }

    cout << ans << endl;
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
