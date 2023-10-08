#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void solve(string &s, int x)
{
    string initialTime = s;
    int cnt = 0;
    while (true)
    {

        if (isPalindrome(s))
            cnt++;
        int hh = stoi(s.substr(0, 2));
        int mm = stoi(s.substr(3, 2));

        mm += x;
        hh += mm / 60;
        mm %= 60;
        hh %= 24;

        s = (hh < 10 ? "0" : "") + to_string(hh) + ":" + (mm < 10 ? "0" : "") + to_string(mm);

        if (s == initialTime)
            break;
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;

        solve(s, x);
    }
    return 0;
}
