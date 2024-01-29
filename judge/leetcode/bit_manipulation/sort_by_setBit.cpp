#include <bits/stdc++.h>
using namespace std;

int setBitCount(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    vector<pair<int, int>> v(arr.size());
    for (int i = 0; i < n; i++)
    {
        int bitA = setBitCount(arr[i]);
        v[i].first = bitA;
        v[i].second = arr[i];
    }

    sort(v.begin(), v.end());

    vector<int> result;

    for (auto it : v)
        cout << it.first << " ";

    return 0;
}
