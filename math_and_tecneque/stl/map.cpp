#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // vector<int> v;

    // map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin >> a;

    //     mp[a]++;
    // }

    // for (auto it : mp)
    // {
    //     cout << it.second;
    // }

    // vector<int> v;

    // map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     mp[v[i]]++;
    // }

    // for (auto it : mp)
    // {
    //     cout << it.first;
    // }
    int fr[26] = {0};

    for (char i = 'a'; i <= 'z'; i++)
    {
        fr[i - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << fr[i] << " ";
    }

    return 0;
}