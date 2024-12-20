#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    vector<string> p1(n), p2(n), p3(n);
    map<string, int> word_count;

    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
        word_count[p1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p2[i];
        word_count[p2[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p3[i];
        word_count[p3[i]]++;
    }

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (word_count[p1[i]] == 1)
        {
            a += 3;
        }
        else if (word_count[p1[i]] == 2)
        {
            a += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (word_count[p2[i]] == 1)
        {
            b += 3;
        }
        else if (word_count[p2[i]] == 2)
        {
            b += 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (word_count[p3[i]] == 1)
        {
            c += 3;
        }
        else if (word_count[p3[i]] == 2)
        {
            c += 1;
        }
    }

    cout << a << " " << b << " " << c << endl;
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
