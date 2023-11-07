#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    int result = a + b + (a * b);

    string str = to_string(result);

    bool flag = true;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '1')
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}