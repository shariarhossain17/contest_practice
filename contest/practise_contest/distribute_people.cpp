#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] == 1 && v[i + 1] == 1 && v[i] == 0)
        {
            v[i + 1] = 0;
            k++;
        }
    }

    cout << k;

    return 0;
}