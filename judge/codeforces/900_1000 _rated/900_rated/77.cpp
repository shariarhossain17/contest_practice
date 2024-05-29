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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    vector<int> v;
    vector<int> v2;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(a);
        v2.push_back(b);

        if (a != b)
        {
            cout << "rated";
            return 0;
        };
    }

    bool fl = false;

    for (int i = 0; i < v.size() - 1 && !fl; i++)
    {
        if (v[i + 1] > v[i])
        {
            fl = true;
            break;
        }
    }

    if (fl)
    {
        cout << "unrated\n";
    }
    else
        cout << "maybe\n";
    return 0;
}
