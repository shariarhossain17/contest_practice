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

    int n, m;
    cin >> n >> m;

    map<string, pair<string, string>> mp1;
    map<string, pair<string, string>> mp2;

    while (m--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        mp1[s1] = {s1, s2};
        mp2[s2] = {s1, s2};
    }

    while (n--)
    {
        string s;
        cin >> s;

        if (mp1.find(s) != mp1.end())
        {
            string t1 = mp1[s].first;
            string t2 = mp1[s].second;

            if (t1.size() > t2.size())
                cout << t2 << " ";
            else
                cout << t1 << " ";
        }
        else
        {
            string t1 = mp2[s].first;
            string t2 = mp2[s].second;
            if (t1.size() > t2.size())
                cout << t2 << " ";
            else
                cout << t1 << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}