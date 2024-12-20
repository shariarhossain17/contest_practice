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

int digit_sum(int x)
{

    int s = 0;
    while (x)
    {
        s += (x % 10);
        x /= 10;
    }

    return s;
}
void solve()
{
    int n, q;
    cin >> n >> q;

    vi v(n);
    array_input_int(v, 0, n);

    set<int> st;

    for (int i = 0; i < n; i++)
        st.insert(i);

    st.insert(1000000007);

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            int idx = l;

            while (idx <= r)
            {
                idx = *st.lower_bound(idx);

                if (idx > r)
                    break;
                int tmp = digit_sum(v[idx]);

                if (tmp == v[idx])
                    st.erase(idx);

                v[idx] = tmp;
                idx++;
            }
        }
        else
        {
            int a;
            cin >> a;
            cout << v[a - 1] << "\n";
        }
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