#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p;

    pair<int, pair<int, int>> pp = {13, {1, 4}};

    cout << pp.first << pp.second.first;

    pair<int, int> ar[] = {{1, 2}, {2, 3}};

    cout << ar[0].first;
    return 0;
}