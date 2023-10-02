#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    if (n.length() < 4)
    {
        int rest = 4 - n.length();

        for (int i = 0; i < rest; i++)
        {
            n = '0' + n;
        }
    }

    cout << n;
    return 0;
}
