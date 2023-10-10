#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int unique_pyanis = 0;

    for (int i = 0; i < n; i++)
    {
        int pyani;
        cin >> pyani;

        unique_pyanis ^= pyani;
    }

    cout << unique_pyanis << endl;

    return 0;
}