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

// Function to compute GCD
int gcd(int a, int b)
{
    while (b)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

string lcmString(string &s1, string &s2)
{
    int n1 = s1.size(), n2 = s2.size();
    int lcmLen = lcm(n1, n2);
    string repeatedS1 = "", repeatedS2 = "";
    while (repeatedS1.size() < lcmLen)
    {
        repeatedS1 += s1;
    }
    while (repeatedS2.size() < lcmLen)
    {
        repeatedS2 += s2;
    }
    if (repeatedS1 == repeatedS2)
        return repeatedS1;
    return "-1";
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    string result = lcmString(s1, s2);
    if (result != "-1")
    {
        cout << result << endl;
    }
    else
    {
        cout << "-1\n";
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
