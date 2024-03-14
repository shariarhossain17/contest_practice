#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int i = 0, prev = 0, next = 0, ans = INT_MIN;

    while (i < v.size())
    {

        if (v[i] == 0)
        {
            ans = max(ans, prev + next);

            prev = next;
            next = 0;
        }
        else
            next++;

        i++;
    }

    if (ans == INT_MIN)
        cout << v.size() - 1;
    else
        cout << max(ans, prev + next);

    return 0;
}