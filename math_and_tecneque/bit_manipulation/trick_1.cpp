

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // if xor with same vale output  will be 0 suppose you have value 5 if you xor 5^5 answer will be 0 example:

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        ans ^= a;
    }

    cout << ans;
    return 0;
}