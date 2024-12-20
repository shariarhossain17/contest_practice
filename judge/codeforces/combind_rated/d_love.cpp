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
    int q;
    cin >> q;

    set<int> left, right;

    map<int, int> mp1, mp2;

    while (q--)
    {
        char s;
        int l, r;
        cin >> s >> l >> r;

        if (s == '+')
        {
            left.insert(l);
            right.insert(r);

            mp1[l]++;
            mp2[r]++;
        }
        else
        {
            mp1[l]--;
            mp2[r]--;

            if (!mp1[l])
                left.erase(l);
            if (!mp2[r])
                right.erase(r);
        }

        if (!left.empty() and *--left.end() > *right.begin())
            Yes;
        else
            No;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
