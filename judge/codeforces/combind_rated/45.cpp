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
    cin >> n;
    vi boy(n);
    array_input_int(boy, 0, n);
    cin >> m;
    vi girl(m); // Initialize girl vector after reading m
    array_input_int(girl, 0, m);

    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());

    int i = 0, j = 0;
    int cnt = 0;

    while (i < n && j < m)
    {
        int sk = abs(boy[i] - girl[j]);

        if (sk <= 1)
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            if (boy[i] < girl[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
