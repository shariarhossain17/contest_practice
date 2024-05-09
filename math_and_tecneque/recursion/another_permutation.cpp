#include <bits/stdc++.h>
using namespace std;

void permutation(int idx, vector<int> &ds)
{
    if (idx == ds.size())
    {
        for (int i : ds)
            cout << i << " ";
        cout << "\n";
    }

    for (int i = idx; i < ds.size(); i++)
    {
        swap(ds[idx], ds[i]);

        permutation(idx + 1, ds);
        swap(ds[idx], ds[i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> ar{1, 2, 3};

    permutation(0, ar);
    return 0;
}