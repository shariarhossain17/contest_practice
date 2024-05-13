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

    int arr[n];

    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (hash.find(arr[i]) == hash.end())
        {
            hash[arr[i]] = i;
        }
        else
        {
            hash[arr[i]] = -1;
        }
    }
    if (hash.begin()->second == -1)
        cout << "Still Rozdil";
    else
        cout << hash.begin()->second + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
