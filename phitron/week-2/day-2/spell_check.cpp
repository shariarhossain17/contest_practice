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
        string s1;
        cin >> s1;

        sort(s1.begin(), s1.end());

        string s2 = "Timur";

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
            {
                flag = true;
                break;
            }
        }
        if (s1.size() != s2.size())
        {
            cout << "NO" << endl;
        }
        else if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}