#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // remove set bit

    int n;
    cin >> n;

    cout << (n & n - 1);
    return 0;
}