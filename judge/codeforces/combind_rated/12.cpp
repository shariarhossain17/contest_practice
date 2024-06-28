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

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
        return a.second > b.second;
}
void solve()
{
    int n;
    cin >> n;

    int t = n;

    vector<pair<int, int>> v;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), compare);

    int price = v[0].first;
    int condition = v[0].second;

    bool flag = false;

    for (int i = 0; i < t - 1; i++)
    {

        if (v[i + 1].second < v[i].second)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}