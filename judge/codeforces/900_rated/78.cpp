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
    string number;
    cin >> n >> number;

    vector<int> odd_positions;
    vector<int> even_positions;

    // Collect digits based on their positions
    for (int i = 0; i < n; ++i)
    {
        int digit = number[i] - '0';
        if ((i + 1) % 2 == 1)
        { // Odd position (1-indexed)
            odd_positions.push_back(digit);
        }
        else
        { // Even position (1-indexed)
            even_positions.push_back(digit);
        }
    }

    bool razeWins = false;
    bool breachWins = false;

    if (n % 2 == 1)
    {
        for (int digit : odd_positions)
        {
            if (digit % 2 == 1)
            {
                razeWins = true;
                break;
            }
        }
        if (razeWins)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else
    {
        for (int digit : even_positions)
        {
            if (digit % 2 == 0)
            {
                breachWins = true;
                break;
            }
        }
        if (breachWins)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
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
