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

// brute force
// void solve()
// {

//     int n;
//     cin >> n;

//     vi nums(n);

//     array_input_int(nums, 0, n);

//     int t = 0;

//     set<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             vector<int> tmp;
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (nums[i] + nums[j] + nums[k] == 0)
//                 {
//                     tmp.push_back(nums[i]);
//                     tmp.push_back(nums[j]);
//                     tmp.push_back(nums[k]);
//                 }
//             }

//             sort(tmp.begin(), tmp.end());

//             ans.insert(tmp);
//         }
//     }

//     for (auto v : ans)
//     {
//         for (auto i : v)
//             cout << i << " ";
//         newLine;
//     }
// }

// better
//  void solve()
//  {
//      int n;
//      cin >> n;

//     vi nums(n);
//     array_input_int(nums, 0, n);

//     set<vector<int>> ans;

//     for (int i = 0; i < n - 2; i++)
//     {

//         unordered_map<int, int> hashmap;

//         for (int j = i + 1; j < n; j++)
//         {
//             int complement = -(nums[i] + nums[j]);

//             if (hashmap.find(complement) != hashmap.end())
//             {
//                 vector<int> triplet = {nums[i], nums[j], complement};
//                 sort(triplet.begin(), triplet.end());
//                 ans.insert(triplet);
//             }

//             hashmap[nums[j]] = j;
//         }
//     }

//     for (const auto &v : ans)
//     {
//         for (int i : v)
//             cout << i << " ";
//         newLine;
//     }
// }

// optimal
void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);

    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {

        if (i > 0 and nums[i] == nums[i - 1])
            continue;

        int j = i + 1;

        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {

                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {

                vector<int> tmp({nums[i], nums[j], nums[k]});
                ans.push_back(tmp);

                j++;
                k--;

                while (j < k and nums[j] == nums[j - 1])
                {
                    j++;
                }
                while (j < k and nums[k] == nums[k + 1])
                {
                    k--;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
