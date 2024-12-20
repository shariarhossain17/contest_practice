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

int split_array(vector<int> &v, int mid)
{

    ll s = 0;

    int cnt = 1;

    for (int i = 0; i < v.size(); i++)
    {
        if (s + v[i] <= mid)
            s += v[i];
        else
        {
            s = v[i];
            cnt++;
        }
    }

    return cnt;
}
void solve()
{

    int n, k;
    cin >> n >> k;
    vi v(n);
    array_input_int(v, 0, n);

    int low = *max_element(v.begin(), v.end());
    int high = accumulate(v.begin(), v.end(), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        cout << mid << " " << split_array(v, mid) << endl;
        if (split_array(v, mid) > k)
            low = mid + 1;
        else
            high = mid - 1;
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