#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<char, long long> firstLetterCount;
    map<char, long long> secondLetterCount;
    map<string, long long> stringCount;
    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        firstLetterCount[a[i][0]]++;
        secondLetterCount[a[i][1]]++;
        stringCount[a[i]]++;
    }

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        long long x = max(0LL, firstLetterCount[a[i][0]] - stringCount[a[i]]);
        ans += x;
        x = max(0LL, secondLetterCount[a[i][1]] - stringCount[a[i]]);
        ans += x;

        if (firstLetterCount[a[i][0]] > 0)
            firstLetterCount[a[i][0]]--;

        if (secondLetterCount[a[i][1]] > 0)
            secondLetterCount[a[i][1]]--;

        if (stringCount[a[i]] > 0)
            stringCount[a[i]]--;
    }

    cout << ans << endl;
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