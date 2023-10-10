#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;

    while (n > 0)
    {
        count++;
        n /= k;
    }

    cout << count << endl;

    return 0;
}