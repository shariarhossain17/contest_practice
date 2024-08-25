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
void solve()
{

    int n, m;
    cin >> n >> m;
    vi nums1(n + m, 0), nums2(m);

    array_input_int(nums1, 0, n);
    array_input_int(nums2, 0, m);

    // int j = 0;

    // for (int i = 0; i < n + m; i++)
    // {
    //     if (nums1[i] > 0)
    //         continue;
    //     nums1[i] = nums2[j];
    //     j++;
    // }

    // sort(nums1.begin(), nums2.end());

    // better

    int i = 0;
    int j = 0;

    while (i < n + m)
    {
        if (nums1[i] < nums2[j] and j < m)
        {
            int tmp = nums1[i];
            nums1[i] = nums2[j];

            nums1[n + m - 1] = nums1[i + 1];

            j++;
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