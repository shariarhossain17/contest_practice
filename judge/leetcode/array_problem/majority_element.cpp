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

// const int val = 1e4 + 7;
// // brute force
// void solve()
// {
//     int n;
//     cin >> n;

//     vi nums(n);

//     array_input_int(nums, 0, n);

//     vector<int> ans;

//     vector<bool> checked(val, false);

//     for (int i = 0; i < n; i++)
//     {

//         if (checked[nums[i]])
//             continue;

//         checked[nums[i]] = true;
//         int cnt = 0;

//         for (int j = 0; j < n; j++)
//         {
//             if (nums[i] == nums[j])
//                 cnt++;
//         }

//         if (cnt > (n / 3))
//         {
//             ans.push_back(nums[i]);
//         }
//     }

//     for (auto i : ans)
//         cout << i << " ";
// }

// better

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);

    map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second > n / 3)
        {
            ans.push_back(i.first);
        }
    }

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
