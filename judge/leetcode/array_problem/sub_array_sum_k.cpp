#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

//  brute force
// void solve()
// {
//     int n, K;
//     cin >> n >> K;

//     vi nums(n);
//     array_input_int(nums, 0, n);

//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {

//                 sum += nums[k];
//             }
//             if (sum == K)
//                 cnt++;
//         }
//     }

//     cout << cnt << endl;
// }

// better
// void solve()
// {
//     int n, K;
//     cin >> n >> K;

//     vi nums(n);
//     array_input_int(nums, 0, n);

//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {

//         int sum = 0;

//         for (int j = i; j < n; j++)
//         {

//             sum += nums[j];
//             if (sum == K)
//                 cnt++;
//         }
//     }

//     cout << cnt << endl;
// }

// optimal
void solve()
{
    int n, K;
    cin >> n >> K;

    vi nums(n);
    array_input_int(nums, 0, n);

    int cnt = 0;
    int s = 0;

    map<int, int> mp;

    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        s += nums[i];

        if (mp.find(s - K) != mp.end())
        {
            cnt += mp[s - K];
        }

        mp[s]++;
    }

    cout << cnt << endl;
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
