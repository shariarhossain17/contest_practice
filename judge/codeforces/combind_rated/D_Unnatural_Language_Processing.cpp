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

    vi marked(n, false);

    vector<string> ans;

    for (int i = n - 1; i > 0; i--)
    {
        if (s[i] == 'a' or s[i] == 'e')
        {
            if (i == (n - 1))
            {
                marked[i] = true;
                marked[n - 2] = true;

                string tmp;
                tmp += s[n - 2];
                tmp += s[i];

                ans.push_back(tmp);
            }
            else
            {

                if (marked[i + 1])
                {
                    marked[i] = true;
                    marked[i - 1] = true;

                    string tmp;
                    tmp += s[i - 1];
                    tmp += s[i];

                    ans.push_back(tmp);
                }
                else
                {
                    marked[i] = true;
                    marked[i - 1] = true;
                    marked[i + 1] = true;
                    string tmp;
                    tmp += s[i - 1];
                    tmp += s[i];

                    tmp += s[i + 1];

                    ans.push_back(tmp);
                }
            }
        }
    }

    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << ".";
    }

    cout << ans[ans.size() - 1];
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