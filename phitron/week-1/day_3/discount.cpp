#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double discountPercentage = (a - b) / a * 100.0;

    cout << fixed << setprecision(15) << discountPercentage << endl;

    return 0;
}