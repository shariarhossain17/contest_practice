#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        int sum = a + b;

        if (sum == c)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }

    return 0;
}