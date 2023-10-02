#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int shots_ebony = c / a;

    for (int i = 0; i <= shots_ebony; i++)
    {
        int remaining_damage = c - i * a;
        if (remaining_damage % b == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}