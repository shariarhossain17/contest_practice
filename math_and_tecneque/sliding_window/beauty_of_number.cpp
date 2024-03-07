#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    int k;
    cin >> k;

    string s = to_string(num);

    int i = 0, cnt = 0;

    while (i + k <= s.size())
    {

        string ss = s.substr(i, k);

        int r = stoi(ss);

        if (r != 0 && num % r == 0)
            cnt++;

        i++;
    }

    cout << cnt;

    return 0;
}
