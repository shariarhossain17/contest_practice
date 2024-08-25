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

    vi nums(n);

    array_input_int(nums, 0, n);
    set<vector<int>> st;
    // brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             for (int l = k + 1; l < n; l++)
    //             {
    //                 if (nums[i] + nums[j] + nums[k] + nums[l] == t)
    //                 {

    //                     vector<int> tmp;
    //                     tmp = {nums[i], nums[j], nums[k], nums[l]};

    //                     sort(tmp.begin(), tmp.end());
    //                     st.insert(tmp);
    //                 }
    //             }
    //         }
    //     }
    // }

    // better
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         set<int> hashmap;
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             int f = t - (nums[i] + nums[j] + nums[k]);

    //             if (hashmap.find(f) != hashmap.end())
    //             {
    //                 vector<int> tmp = {nums[i], nums[j], nums[k], f};
    //                 sort(tmp.begin(), tmp.end());
    //                 st.insert(tmp);
    //             }

    //             hashmap.insert(nums[k]);
    //         }
    //     }
    // }
    // for (auto v : st)
    // {
    //     for (auto i : v)
    //         cout << i << " ";
    //     newLine;
    // }

    //  optimal

    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];

                if (sum > t)
                {
                    l--;
                }
                else if (sum < t)
                {
                    k++;
                }
                else
                {
                    vector<int> tmp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(tmp);
                    k++;
                    l--;

                    while (k < l && nums[k] == nums[k - 1])
                    {
                        k++;
                    }

                    while (k < l && nums[l] == nums[l + 1])
                    {
                        l--;
                    }
                }
            }
        }
    }

    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        newLine;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}