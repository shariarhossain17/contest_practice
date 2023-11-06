#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    vector<int> v;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b)
        {
            int tmp = b;
            b = a;
            a = tmp;
        }

        if (b > c)
        {
            int tmp = c;
            c = b;
            b = tmp;
        }
        if (a > b)
        {
            int tmp = b;
            b = a;
            a = tmp;
        }

        if (a + b == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}