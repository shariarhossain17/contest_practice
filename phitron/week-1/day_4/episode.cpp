#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int j = 1;
    int result = -1;

    for (int i = 0; i < n - 1; i++, j++)
    {
        if (a[j] - a[i] > 1)
        {
            result = a[i] + 1;
            break;
        }
    }

    if (result >= 0)
        cout << result;
    else
        cout << a[n - 1] + 1 << endl;

    return 0;
}
