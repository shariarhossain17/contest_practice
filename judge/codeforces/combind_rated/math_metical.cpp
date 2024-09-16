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

    set<string> st;

    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        st.insert(temp);
    }

    if (n == 3)
    {

        if (s[1] == '0')
        {
            int sum_result = (s[0] - '0') + (s[2] - '0');
            int prod_result = (s[0] - '0') * (s[2] - '0');

            cout << min(sum_result, prod_result) << "\n";
            return;
        }

        else
        {
            if (s[0] == '0' || s[2] == '0')
            {
                cout << "0\n";
                return;
            }
        }
    }

    if (n > 3)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout << 0 << endl;
                return;
            }
        }
    }
    vector<string> v(st.begin(), st.end());

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            continue;
        sum += s[i] - '0';
    }

    int ans = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        string tmp = v[i];
        int t_sum = sum;

        if (tmp[0] != '1')
        {
            t_sum -= tmp[0] - '0';
        }
        if (tmp[1] != '1')
        {
            t_sum -= tmp[1] - '0';
        }

        t_sum += stoi(tmp);

        ans = min(t_sum, ans);
    }

    cout << ans << endl;
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
