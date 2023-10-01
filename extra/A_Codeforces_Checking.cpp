#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        cin >> a;

        string b = "codeforces";

        bool result = false;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == a)
            {
                result = true;
                break;
            }
        }

        if (result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}