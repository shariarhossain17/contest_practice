#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, n1, n2;
        cin >> n >> n1 >> n2;

        if (n + n1 >= 10 || n + n2 >= 10 || n1 + n2 >= 10)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}