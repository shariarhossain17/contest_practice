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
    string s1, s2;
    cin >> s1 >> s2;

    cout << s1 << " " << s2 << endl;

    int t;
    cin >> t;
    while (t--)
    {
        string s3, s4;
        cin >> s3 >> s4;

        if (s1 == s3)
        {
            swap(s3, s4);
            cout << s3 << " " << s2 << endl;
            s1 = s3;
        }
        else if (s2 == s3)
        {
            swap(s3, s4);
            cout << s1 << " " << s3 << endl;
            s2 = s3;
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