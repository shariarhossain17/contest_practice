#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < s.size() - 3; i++)
        {
            sum1 += (s[i] - '0');
        }
        for (int i = 3; i < s.size(); i++)
        {
            sum2 += (s[i] - '0');
        }
        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}