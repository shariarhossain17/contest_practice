#include <bits/stdc++.h>
using namespace std;

bool ca(string s, int k)
{
    int n = s.length();
    vector<int> fq(26, 0);

    for (char c : s)
    {
        fq[c - 'a']++;
    }
    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {

        if (fq[i] % 2 != 0)
        {
            cnt++;
        }
    }

    int cnt2 = max(0, cnt - 1);
    return k >= cnt2 && k <= n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (ca(s, k))
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
    }

    return 0;
}