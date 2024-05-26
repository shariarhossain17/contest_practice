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

void reverse(vector<int> &v, int i, int j)
{
    while (i < j)
    {
        swap(v[i++], v[j--]);
    }
}
void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    array_input_int(nums, 0, n);

    k = k % n;
    reverse(nums, 0, n - 1);
    reverse(nums, k, n - 1);
    reverse(nums, 0, k - 1);

    for (int i : nums)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}