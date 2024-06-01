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

void solve(vector<int> &nums)
{
    int cnt = 0;
    int mx = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            cnt++;
        else
        {

            cnt = 0;
        }
        mx = max(cnt, mx);
    }

    cout << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int> v(n);

    array_input_int(v, 0, n);

    solve(v);
    return 0;
}