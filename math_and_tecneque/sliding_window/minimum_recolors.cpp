#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int k;
    cin >> k;

    int i = 0, j = 0, w = 0, b = 0;

    int count = INT_MAX;

    while (j < s.size())
    {
        if (s[j] == 'W')
            w++;
        else
            b++;

        if (j >= k - 1)
        {

            count = min(w, count);

            if (s[i] == 'W')
            {
                w -= 1;
            }
            else
            {
                b -= 1;
            }

            i++;
        }

        j++;
    }

    cout << count;

    return 0;
}