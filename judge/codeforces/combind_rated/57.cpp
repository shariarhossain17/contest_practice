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

    vi v(n), v1(n - 1), v2(n - 2);

    array_input_int(v, 0, n);
    array_input_int(v1, 0, n - 1);
    array_input_int(v2, 0, n - 2);

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int a1 = v[n - 1];  // Assume the last element is missing initially
    int a2 = v1[n - 2]; // Assume the last element is missing initially

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v1[i])
        {
            a1 = v[i];
            break;
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (v1[i] != v2[i])
        {
            a2 = v1[i];
            break;
        }
    }

    cout << a1 << endl;
    cout << a2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
