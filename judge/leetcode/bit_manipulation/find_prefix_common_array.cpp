#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    set<int> st;
    vector<int> result;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cnt++;
        }
        else
        {
            if (st.find(a[i]) != st.end())
            {
                cnt++;
            }
            else
            {
                st.insert(a[i]);
            }

            if (st.find(b[i]) != st.end())
            {
                cnt++;
            }
            else
            {
                st.insert(b[i]);
            }
        }

        result.push_back(cnt);
    }

    return 0;
}
