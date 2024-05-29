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

    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = INT_MIN;
    string ans;

    for (int i = 0; i < s.size() - 1; i++)
    {
        string str = s.substr(i, 2);
        int count = 1;

        for (int j = i + 1; j < s.size() - 1; j++)
        {
            if (s.substr(j, 2) == str)
                count++;
        }

        if (count > mx)
            ans = str;

        mx = max(count, mx);
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}