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

bool isMatch(string s1, string s2)
{
    int pos = 0;
    for (int i = 0; i < (int)s2.length(); i++)
        if (s1[pos] == s2[i])
            ++pos;
    if (pos == s1.length())
        return true;
    return false;
}

int main()
{

    string s;
    cin >> s;
    if (isMatch("hello", s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}