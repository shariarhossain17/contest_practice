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

int countSubstring(string &str, string &sub)
{
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(sub, pos)) != string::npos)
    {
        count++;
        pos += sub.length();
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string u1 = "map";
    string u2 = "pie";
    string u3 = "mapie";
    int cnt1 = countSubstring(s, u1);
    int cnt2 = countSubstring(s, u2);
    int cnt3 = countSubstring(s, u3);

    cout << abs((cnt1 + cnt2) - cnt3) << endl;
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