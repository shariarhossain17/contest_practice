#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];

        st.insert(temp);
    }

    cout << st.size() << endl;
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