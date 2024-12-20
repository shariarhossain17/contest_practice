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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);

    array_input_int(v, 0, n);

    vector<pair<int, string>> count_zero(n);

    // Remove trailing zeros and track the count of trailing zeros
    for (int i = 0; i < n; i++)
    {
        string s = v[i];

        int cnt = 0;
        while (!s.empty() && s.back() == '0')
        {
            cnt++;
            s.pop_back();
        }

        count_zero[i] = make_pair(cnt, s); // Store the number without trailing zeros
    }

    // Sort based on the number of trailing zeros (descending order)
    sort(count_zero.begin(), count_zero.end(),
         [](const pair<int, string> &a, const pair<int, string> &b)
         {
             return a.first > b.first; // We want the largest number of trailing zeros first
         });

    string ans;
    int total_trailing_zeros = 0;

    // Concatenate strings, adding trailing zeros at the end
    for (auto &p : count_zero)
    {
        ans += p.second;                 // Add the number without its trailing zeros
        total_trailing_zeros += p.first; // Track the trailing zeros
    }

    // Now append the total trailing zeros at the end of the result
    ans.append(total_trailing_zeros, '0');

    cout << ans.size() << endl;
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
