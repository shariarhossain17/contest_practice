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

    deque<int> dq;

    for (int i = 0; i < n; i++)
        dq.push_back(s[i] - '0');

    int idx = 0;

    vector<int> ans;

    while (!dq.empty() and ans.size() <= 300)

    {
        if (dq.front() == dq.back() and dq.front() == 1)
        {
            ans.push_back(idx);
            dq.pop_back();
            dq.push_front(1);
        }
        else if (dq.front() == dq.back() and dq.front() == 0)
        {
            ans.push_back(idx + dq.size());
            dq.pop_front();
            dq.push_back(0);
        }
        else
        {
            dq.pop_front();
            dq.pop_back();
        }
        idx++;
    }

    if (ans.size() > 300)
        cout << "-1\n";
    else
    {
        cout << ans.size() << endl;

        for (auto i : ans)
            cout << i << " ";
        newLine;
    }
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