#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        vector<int> v(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        int one = 0;
        int zero = 0;
        for (int i : v)
        {
            if (i == 1)
                one++;
            else
                zero++;
        }

        if (zero < one)
            cout << "Not now\n";
        else
            cout << "Water filling time\n";
    }

    return 0;
}