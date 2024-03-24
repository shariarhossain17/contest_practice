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

// Function to convert a number to its corresponding character position in the alphabet
char toChar(int num)
{
    return 'a' + num - 1;
}

void solve()
{
    int n;
    cin >> n;

    int tmp = n;

    int cnt = 0;

    while (n > 26)
    {
        n -= 26;
        cnt++;
    }

    if (cnt == 3)
    {
        cout << toChar(26) << toChar(26) << toChar(26) << "\n";
    }
    else if (cnt == 2)
    {
        cout << toChar(n) << toChar(26) << toChar(26) << "\n";
    }
    else if (cnt == 1)
    {
        if (n > 1)
        {
            cout << toChar(1) << toChar(n - 1) << toChar(26) << "\n";
        }
        else
        {
            cout << toChar(1) << toChar(1) << toChar(25) << "\n";
        }
    }
    else
    {
        cout << toChar(1) << toChar(1) << toChar(n - 2) << "\n";
    }
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
