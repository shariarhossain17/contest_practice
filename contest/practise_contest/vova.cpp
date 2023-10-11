#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long L, v, l, r;
        cin >> L >> v >> l >> r;

        long long lanterns = L / v;
        long long hidelenterns = r / v - (l - 1) / v;
        long long visibleLanterns = lanterns - hidelenterns;
        cout << visibleLanterns << endl;
    }

    return 0;
}