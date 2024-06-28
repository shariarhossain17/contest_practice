#include <iostream>
#include <vector>
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
    int n, m;
    cin >> n >> m;

    int frq[m][6] = {0};

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'A')
                frq[j][0]++;
            else if (s[j] == 'B')
                frq[j][1]++;
            else if (s[j] == 'C')
                frq[j][2]++;
            else if (s[j] == 'D')
                frq[j][3]++;
            else if (s[j] == 'E')
                frq[j][4]++;
        }
    }

    vi v(m);
    array_input_int(v, 0, m);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int mx = 0;

        for (int j = 0; j < 5; j++)
        {
            mx = max(frq[i][j], mx);
        }

        ans += (mx * v[i]);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
