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

// int binary_search(int n, vector<int> &v, int t)
// {

//     int low = 0;
//     int high = n - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (v[mid] == t)
//         {
//             return mid;
//         }
//         else if (v[mid] < t)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return -1;
// }

// recursive
int binary_search(int n, vector<int> &v, int t, int low, int high)
{

    int mid = low + (high - low) / 2;

    if (low > high)
        return -1;

    if (v[mid] == t)
        return mid;
    else if (v[mid] < t)
        binary_search(n, v, t, mid + 1, high);
    else
        binary_search(n, v, t, low, mid - 1);
    void solve()
    {

        int n, t;
        cin >> n >> t;

        vi v(n);
        array_input_int(v, 0, n);
        int low = 0;
        int high = n - 1;
        cout << binary_search(n, v, t, low, high);
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