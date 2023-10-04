#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);

    vector<long long> v2;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            sum += v[i];
        else
        {
            v2.push_back(v[i]);
            sum += v[i];
        }
    }
    sort(v2.begin(), v2.end());
    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - v2[0];

    return 0;
}