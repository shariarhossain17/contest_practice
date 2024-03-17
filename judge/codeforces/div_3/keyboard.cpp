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
    string s;
    cin >> s;

    std::vector<int> st1, st2;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (!st2.empty())
            {
                st2.pop_back();
            }
        }
        else if (s[i] == 'b')
        {
            if (!st1.empty())
            {
                st1.pop_back();
            }
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            st1.push_back(i);
        }
        else
        {
            st2.push_back(i);
        }
    }
    std::vector<int> v1, v2;
    for (auto &it : st1)
        v1.push_back(it);
    for (auto &it : st2)
        v1.push_back(it);
    sort(v1.begin(), v1.end());
    for (int &u : v1)
        cout << s[u];
    cout << "\n";
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