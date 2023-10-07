#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
    {
        if (ar[i] != x)
            cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}