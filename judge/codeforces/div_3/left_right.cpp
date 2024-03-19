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
    int a1[2], a2[2];
    a1[0] = 0;
    a1[1] = 0;
    a2[0] = 0;
    a2[1] = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            a2[0]++;
        }
        else
        {
            a2[1]++;
        }
    }

    int ans = -1;
    int val = INT_MAX;
    if ((n / 2) + (n % 2) <= a2[1])
    {

        val = n;
        ans = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            a2[0]--;
            a1[0]++;
        }
        else
        {
            a2[1]--;
            a1[1]++;
        }

        int left_count = a1[0] + a1[1];
        int right_count = a2[0] + a2[1];

        if ((left_count / 2) + (left_count % 2) <= a1[0] && (right_count / 2) + (right_count % 2) <= a2[1])
        {
            int hue = abs(right_count - left_count);
            if (hue < val)
            {
                val = hue;
                ans = i + 1;
            }
        }
    }
    cout << ans;
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