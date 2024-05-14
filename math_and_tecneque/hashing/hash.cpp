#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];

    map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        hash[ar[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {

        int val;
        cin >> val;

        if (hash.find(val) == hash.end())
        {
            cout << "hello";
        }
        cout << "\n";
    }

    return 0;
}