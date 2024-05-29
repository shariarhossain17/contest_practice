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
    char s[8][8];

    map<char, int> white;
    map<char, int> black;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {

            cin >> s[i][j];
            if (s[i][j] >= 97 and s[i][j] <= 122)
            {
                black[s[i][j]]++;
            }
            else if (s[i][j] >= 65 and s[i][j] <= 90)
            {
                white[s[i][j]]++;
            }
        }
    }

    int Q = white['Q'] * 9;
    int R = white['R'] * 5;
    int B = white['B'] * 3;
    int K = white['N'] * 3;
    int P = white['P'] * 1;

    int wh = (Q + R + B + K + P);

    int q = black['q'] * 9;
    int r = black['r'] * 5;
    int b = black['b'] * 3;
    int k = black['n'] * 3;
    int p = black['p'] * 1;

    int bl = (q + r + b + k + p);

    if (wh == bl)
        cout << "Draw";
    else if (wh > bl)
        cout << "White";
    else
        cout << "Black";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}