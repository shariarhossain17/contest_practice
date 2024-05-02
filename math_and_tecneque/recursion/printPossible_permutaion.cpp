#include <bits/stdc++.h>
using namespace std;

void makePermutation(int n, vector<int> &ar, vector<int> &ds, vector<int> &frq)
{
    if (ds.size() == n)
    {
        for (int i : ds)
            cout << i << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!frq[i])
        {
            frq[i] = 1;
            ds.push_back(ar[i]);
            makePermutation(n, ar, ds, frq);
            frq[i] = 0;
            ds.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> ar(n), ds, frq(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
        frq[i] = 0;

    makePermutation(n, ar, ds, frq);
    return 0;
}