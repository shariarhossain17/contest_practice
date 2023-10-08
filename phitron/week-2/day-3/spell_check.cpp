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

        string s2 = "Timru";

        int cnt = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s1[i] == s2[i])
            {
                cnt++;
            }
        }

        if (n != 5)
            cout << "NO" << endl;
        else if (cnt == s2.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}