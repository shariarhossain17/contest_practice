#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        double percentage = 20.0;

        double result = (percentage / 100) * n;

        double output = 100 / result;

        cout << ceil(output) << endl;
    }

    return 0;
}