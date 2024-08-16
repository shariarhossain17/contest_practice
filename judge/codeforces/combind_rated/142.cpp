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

    vector<bool> v(n, true);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            if (i == j or x == 0)
                continue;
            else if (x == 1)
                v[i] = false;
            else if (x == 2)
                v[j] == false;
            else

            {
                v[i] = v[j] = false;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i])
            cnt++;
    }

    cout << cnt << endl;

    for (int i = 0; i < n; i++)
    {
        if (v[i])
            cout << i + 1 << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
