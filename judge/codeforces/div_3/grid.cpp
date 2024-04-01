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

void solve()
{
    int n;
    cin >> n;

    int answer = 0;

    if (n == 0 || n == 1)
    {
        answer = 10;
    }
    else if (n == 2 || n == 4 || n == 12)
    {
        answer = 8;
    }
    else if (n == 3 || n == 10)
    {
        answer = 9;
    }
    else if (n >= 5 && n <= 8)
    {
        answer = 7;
    }
    else if (n == 9)
    {
        answer = 0;
    }
    else
    {
        answer = 6;
    }

    cout << answer;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;

    solve();

    return 0;
}
