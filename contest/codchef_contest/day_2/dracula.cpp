#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        int m = 0;
        int t = 1;
        int c = m;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (c == t)
                cnt++;
            c = (c + 1) % 7;
        }

        cout << cnt << endl;
    }

    return 0;
}
