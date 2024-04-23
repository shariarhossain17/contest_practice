#include <bits/stdc++.h>
using namespace std;

void sub_sequence(int idx, int n, vector<int> &ds, vector<int> &v)
{
    // base case
    if (idx >= n)
    {
        for (int i : ds)
            cout << i << " ";

        if (ds.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    // reverse order

    // not take
    sub_sequence(idx + 1, n, ds, v);

    // take
    ds.push_back(v[idx]);
    sub_sequence(idx + 1, n, ds, v);
    ds.pop_back();

    // without reverse order

    // // take
    // ds.push_back(v[idx]);
    // sub_sequence(idx + 1, n, ds, v);
    // ds.pop_back();

    //     sub_sequence(idx + 1, n, ds, v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n), ds;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sub_sequence(0, n, ds, v);
    return 0;
}