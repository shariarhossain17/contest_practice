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

    vi v(n + 1);
    array_input_int(v, 1, n + 1);
    int low = 1, high = n;

    while (low <= high)
    {

        int mid = low + (high - low) + 1;

        int len = (mid - low) + 1;

        if (low == high)
        {
            cout << "!" << mid << "\n";
            printf("! %d\n", mid);
            fflush(stdout);
            return;
        }

        printf("? %d ", len);

        ll sum = 0;

        for (int i = low; i <= mid; i++)
        {
            printf("%d ", i);
            sum += v[i];
        }

        printf("\n");
        fflush(stdout);
        ll res;
        scanf("%lld", &res);

        if (res > sum)
            high = mid;
        else
            low = mid + 1;
    }
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