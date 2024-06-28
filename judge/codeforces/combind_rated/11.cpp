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

bool sortVec(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}
void solve()
{
    int s, n;

    cin >> s >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), sortVec);

    bool f = true;
    for (auto i : v)
    {
        if (i.first < s)
            s += i.second;
        else
        {
            f = false;
            break;
        }
    }

    if (f)
        Yes;
    else
        No;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}