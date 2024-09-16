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

bool isSame(vector<int> &v)
{

    for (int i = 1; i < v.size(); i++)
    {
        if (v[0] != v[i])
            return false;
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;

    vi v(n);

    array_input_int(v, 0, n);

    set<int> st(v.begin(), v.end());

    if ((n - st.size()) % 2 == 0)
        cout << st.size();
    else
        cout << st.size() - 1;
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