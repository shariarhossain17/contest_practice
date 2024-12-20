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

int count_substring(const string &s, const string &s1)
{

    size_t pos = s.find(s1);

    int cnt = 0;

    while (pos != string::npos)
    {
        cnt++;
        pos = s.find(s1, pos + 1);
    }

    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first = count_substring(s, "map");
    int second = count_substring(s, "pie");
    int third = count_substring(s, "mapie");

    cout << first + second - third << endl;
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