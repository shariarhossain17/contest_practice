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

    vector<pair<char, int>> upper, lower;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            if (!upper.empty())
                upper.pop_back();
        }
        else if (s[i] == 'b')
        {
            if (!lower.empty())
                lower.pop_back();
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper.push_back({s[i], i});
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower.push_back({s[i], i});
        }
    }

    vector<pair<char, int>> result = upper;
    result.insert(result.end(), lower.begin(), lower.end());

    sort(result.begin(), result.end(), [](pair<char, int> &a, pair<char, int> &b)
         { return a.second < b.second; });

    for (auto &p : result)
    {
        cout << p.first;
    }
    newLine;
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
