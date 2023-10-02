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
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        int cnt = 0;
        int j = 1;
        for (int i = 0; i < n; i++, j++)
        {
            if (s[i] != s[j])
                cnt += 2;
            else
                cnt += 1;
        }
        cout << cnt << endl;
    }
    return 0;
}
