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

int a[(int)2e5];
int main()
{
    int n, k, sum, ans = 3e8, indx;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = k; i <= n; i++)
    {
        if (a[i] - a[i - k] < ans)
        {
            ans = a[i] - a[i - k];
            indx = i - k;
        }
    }
    cout << indx + 1;
    return 0;
}