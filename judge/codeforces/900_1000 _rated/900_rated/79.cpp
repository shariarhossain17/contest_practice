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

bool Tringle(int a, int b, int c)
{
    if ((a + b == c) or (b + c == a) or (a + c == b))
    {
        return true;
    }
    return false;
}

bool NonDegenerateTriangle(int a, int b, int c)
{
    if (((a != b) && (b != c) && (c != a)))
    {
        return true;
    }
    return false;
}

bool check(int a, int b, int c)
{
    if ((a + b >= c) && (b + c >= a) && (a + c >= b))
    {
        return true;
    }

    return false;
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    sort(v.begin(), v.end());

    int f = 0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++) //
        {
            for (int k = j + 1; k < v.size(); k++) //
            {
                int a = v[i];
                int b = v[j];
                int c = v[k];

                if (a + b > c)
                {
                    cout << "TRIANGLE";
                    return;
                }
                else if (a + b == c)
                    f = 1;
            }
        }
    }
    if (f == 1)
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
