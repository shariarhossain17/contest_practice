#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

bool isValid(const string &s)
{
    int one = 0, two = 0, three = 0;
    for (char c : s)
    {
        if (c == '1')
            one = 1;
        else if (c == '2')
            two = 1;
        else if (c == '3')
            three = 1;

        if (one && two && three)
            return true;
    }
    return false;
}

void solve()
{
    string s;
    cin >> s;

    if (!isValid(s))
    {
        cout << 0 << "\n";
        return;
    }

    int n = s.size();
    unordered_map<char, int> freq;
    int i = 0, j = 0, ans = INT_MAX;
    int count = 0;

    while (j < n)
    {
        freq[s[j]]++;
        if (freq[s[j]] == 1 && (s[j] == '1' || s[j] == '2' || s[j] == '3'))
            count++;

        while (count == 3)
        {
            ans = min(ans, j - i + 1);
            freq[s[i]]--;
            if (freq[s[i]] == 0 && (s[i] == '1' || s[i] == '2' || s[i] == '3'))
                count--;
            i++;
        }
        j++;
    }

    cout << ans << "\n";
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
