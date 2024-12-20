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

long long make_sum(int mid, vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += ceil((double)(arr[i]) / (double)(mid));
    }
    return sum;
}

void solve()
{
    int n, t;
    cin >> n >> t;

    vi nums(n);

    array_input_int(nums, 0, n);

    int low = 1;
    int high = *max_element(nums.begin(), nums.end());

    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long s = make_sum(mid, nums);

        if (s <= t)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low << endl;
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
