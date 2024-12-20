#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;

    set<int> st;
    st.insert(x);

    while (m--)
    {
        int ci;
        char ri;
        cin >> ci >> ri;

        set<int> temp;

        for (auto i : st)
        {
            if (ri == '0')
            {
                temp.insert((i + ci) % n == 0 ? n : (i + ci) % n);
            }
            else if (ri == '1')
            {
                temp.insert((i - ci + n) % n == 0 ? n : (i - ci + n) % n);
            }
            else
            {
                temp.insert((i + ci) % n == 0 ? n : (i + ci) % n);
                temp.insert((i - ci + n) % n == 0 ? n : (i - ci + n) % n);
            }
        }

        st = temp;
    }

    cout << st.size() << endl;
    for (auto i : st)
        cout << i << " ";
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
