#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int biscuitsProduced = (t / a) * b;
    cout << biscuitsProduced << endl;
    return 0;
}