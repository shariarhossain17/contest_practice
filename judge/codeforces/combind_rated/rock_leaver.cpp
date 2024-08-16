#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    vi ar(n);
    unordered_map<int, int> freq;
    long long cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        freq[ar[i]]++;
    }

    for (auto &x : freq)
    {
        int val = x.first;
        int freq_val = x.second;

        cnt += 1LL * freq_val * (freq_val - 1) / 2;

        for (int bit = 1; bit < (1 << 30); bit <<= 1)
        {
            int target = val | bit;
            if (target > val && freq.count(target))
            {
                cnt += 1LL * freq_val * freq[target];
            }
        }
    }

    cout << cnt << endl;
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
