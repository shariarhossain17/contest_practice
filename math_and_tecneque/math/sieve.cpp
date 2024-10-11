#include <bits/stdc++.h>
#include <iostream>
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

int arr[1000001];
void solve()
{

    int n;
    cin >> n;

    arr[1] = 1;
    arr[2] = 2;

    for (int i = 4; i < n; i += 2)
        arr[i]++;

    for (int i = 3; i < n; i += 2)
    {
        if (!arr[i])
        {
            arr[i] = i;

            for (int j = i * i; j < n; j += j * 2)
            {
                arr[j]++;
            }
        }
    }

    cout << arr[29];
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