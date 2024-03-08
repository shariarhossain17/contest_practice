#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c;
        cin >> a >> b >> c;

        if (a == 'b' && b == 'a')
        {
            char temp = a;
            a = b;
            b = temp;
        }
        else if (a == 'c' && c == 'a')
        {
            char temp = a;
            a = c;
            c = temp;
        }

        else if (b == 'c' && c == 'b')
        {
            char temp = b;
            b = c;
            c = temp;
        }

        if (a == 'a' && b == 'b' && c == 'c')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}