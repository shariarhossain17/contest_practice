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
    int n;
    cin >> n;

    int cnt = 0;

    while (n)
    {

        if ((n & 1) == 0)
        {
            n >>= 1;
            cnt++;
        }
        else
        {
            n ^= 1;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}