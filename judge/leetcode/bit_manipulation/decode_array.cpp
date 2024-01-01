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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, first;
    cin >> n >> first;
    vi encoded(n);

    for (int i = 0; i < n; i++)
    {
        cin >> encoded[i];
    }

    vi decoded = {first};

    for (int i : encoded)
    {
        decoded.push_back(i ^ decoded.back());
    }

    for (int i : decoded)
    {
        cout << i << endl;
    }
    return 0;
}