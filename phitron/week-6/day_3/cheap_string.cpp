#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int w;
    cin >> w;
    string S;
    S = s;
    sort(S.rbegin(), S.rend());
    int sum = 0;
    for (char c : S)
        sum += c - 'a' + 1;
    int i = 0;
    map<char, int> cnt;
    while (sum > w)
    {
        cnt[S[i]]++;
        sum -= S[i] - 'a' + 1;
        i++;
    }

    for (char c : s)
    {
        if (cnt[c])
            cnt[c]--;
        else
            cout << c;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}