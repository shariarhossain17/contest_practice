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

void binary_search(int l, int r, vector<int> &frq, vector<int> &v)
{

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (frq[mid] != frq[l] and v[l] != v[mid])
        {
            cout << l + 1 << " " << mid + 1;
            return;
        }
        else if (frq[mid] != frq[r] and v[r] != v[mid])
        {
            cout << r + 1 << " " << mid + 1;
            return;
        }
        else if (frq[mid] == frq[l])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << "-1 -1";
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vi frq(n, 0);
    frq[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            frq[i] = frq[i - 1];
        }
        else
        {
            frq[i] = frq[i - 1] + 1;
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        binary_search(l, r, frq, v);

        newLine;
    }
    newLine;
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
