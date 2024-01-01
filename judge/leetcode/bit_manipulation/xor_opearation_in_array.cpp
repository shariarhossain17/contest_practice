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
    int n, start;
    cin >> n >> start;

    int cnt = 0;

    int ans = 0;

    while (cnt != n)
    {
        ans ^= start;

        start += 2;
        cnt++;
    }

    cout << ans;

    return 0;
}