#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> divisors(n);

    for (int i = 0; i < n; i++)
    {
        cin >> divisors[i];
    }

    // Find the largest divisor (x)
    int x = *max_element(divisors.begin(), divisors.end());

    // Calculate the product of divisors (P)
    long long P = 1;

    for (int i = 0; i < n; i++)
    {
        P *= divisors[i];
    }

    // Calculate y = P / x
    int y = P / x;

    cout << x << " " << y << endl;
    return 0;
}