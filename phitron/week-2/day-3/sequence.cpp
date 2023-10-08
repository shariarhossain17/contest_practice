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
        vector<int> final_s(n);
        for (int i = 0; i < n; i++)
            cin >> final_s[i];

        for (int i = 0; i < n; i++)
        {

            int s;
            cin >> s;
            string moves;
            cin >> moves;

            for (char move : moves)
            {
                if (move == 'D')
                {
                    final_s[i] += 1;
                    if (final_s[i] > 9)
                    {
                        final_s[i] = 0;
                    }
                }

                else
                {
                    final_s[i] -= 1;
                    if (final_s[i] < 0)
                    {
                        final_s[i] = 9;
                    }
                }
            }
        }

        for (int v : final_s)
        {
            cout << v << " ";
        }

        cout << endl;
    }

    return 0;
}
