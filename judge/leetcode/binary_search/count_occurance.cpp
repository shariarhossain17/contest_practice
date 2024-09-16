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

int last_idx(vector<int> arr, int n, int t)
{

    int low = 0, high = n;

    int last_idx = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == t)
        {
            last_idx = mid + 1;
            low = mid + 1;
        }
        else if (arr[mid] < t)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return last_idx;
}
int first_idx(vector<int> arr, int n, int t)
{

    int low = 0, high = n;

    int last_idx = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == t)
        {
            last_idx = mid;
            high = mid - 1;
        }
        else if (arr[mid] < t)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return last_idx;
}

void solve()
{

    int n, t;
    cin >> n >> t;

    vi arr(n);
    array_input_int(arr, 0, n);

    int last_position = last_idx(arr, n, t);
    int first_position = first_idx(arr, n, t);

    // if (first_position == 0 and last_position == 0)
    // {
    //     cout << 0;
    //     return;
    // }

     cout << last_position - first_position;
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