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

// brute force
// void solve()
// {
//     int n;
//     cin >> n;
//     vi arr(n);

//     array_input_int(arr, 0, n);

//     vi ans;

//     for (int i = 0; i < n - 1; i++)
//     {

//         bool flag = true;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 flag = false;
//                 break;
//             }
//         }

//         if (flag)
//             ans.push_back(arr[i])
//     }

//     ans.push_back(arr[n - 1]);

//     for (int i : ans)
//         cout << i << " ";
// }
void solve()
{
    int n;
    cin >> n;
    vi arr(n);

    array_input_int(arr, 0, n);

    vi ans;

    int mx = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (mx < arr[i])
        {
            ans.push_back(arr[i]);
            mx = arr[i];
        }
    }

    

    for (int i : ans)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}