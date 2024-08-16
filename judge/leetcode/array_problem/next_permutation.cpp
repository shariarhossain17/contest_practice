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

    vi ar(n);
    array_input_int(ar, 0, n);

    int idx = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (ar[i] < ar[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
        reverse(ar.begin(), ar.end());

    for (int i = n - 1; i >= idx; i--)
    {
        if (ar[i] > ar[idx])
        {
            swap(ar[i], ar[idx]);
            break;
        }
    }

    reverse(ar.begin() + idx + 1, ar.end());

    for (int i : ar)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}