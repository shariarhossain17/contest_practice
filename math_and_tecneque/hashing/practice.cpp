#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100000001;
int f[MAX_SIZE];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        f[ar[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {

        int val;
        cin >> val;

        cout << f[val];
        cout << "\n";
    }

    return 0;
}