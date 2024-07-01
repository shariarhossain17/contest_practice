// brute force

// #include <iostream>
// #include <vector>

// using namespace std;

// #define ll long long
// #define newLine cout << "\n"
// #define pb push_back
// #define vi vector<int>
// #define Yes cout << "YES\n"
// #define No cout << "NO\n"
// #define array_input_int(a, o, n) \
//     for (int i = o; i < n; i++)  \
//     {                            \
//         cin >> (a[i]);           \
//     }

// void merge(vector<int> &v, int l, int mid, int r)
// {
//     vector<int> ans;

//     int left = l;
//     int right = mid + 1;

//     while (left <= mid && right <= r)
//     {
//         if (v[left] < v[right])
//         {
//             ans.push_back(v[left]);
//             left++;
//         }
//         else
//         {
//             ans.push_back(v[right]);
//             right++;
//         }
//     }

//     while (left <= mid)
//     {
//         ans.push_back(v[left]);
//         left++;
//     }
//     while (right <= r)
//     {
//         ans.push_back(v[right]);
//         right++;
//     }

//     for (int i = l; i <= r; i++)
//     {
//         v[i] = ans[i - l];
//     }
// }

// void solve(vector<int> &v, int l, int r)
// {
//     if (l == r)
//         return;

//     int mid = l + (r - l) / 2;

//     solve(v, l, mid);
//     solve(v, mid + 1, r);

//     merge(v, l, mid, r);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vi v(n);
//     array_input_int(v, 0, n);

//     int l = 0;
//     int r = n - 1;
//     solve(v, l, r);

//     for (int i = 0; i < n; i++)
//         cout << v[i] << " ";

//     return 0;
// }

// better

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define newLine cout << "\n"
// #define pb push_back
// #define vi vector<int>
// #define Yes cout << "YES\n"
// #define No cout << "NO\n"
// #define array_input_int(a, o, n) \
//     for (int i = o; i < n; i++)  \
//     {                            \
//         cin >> (a[i]);           \
//     }

// void solve()
// {

//     int n;
//     cin >> n;
//     vi v(n);

//     array_input_int(v, 0, n);

//     int zero = 0, one = 0, two = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == 0)
//             zero++;
//         else if (v[i] == 1)
//             one++;
//         else
//             two++;
//     }

//     for (int i = 0; i < zero; i++)
//         cout << 0 << " ";
//     for (int i = 0; i < one; i++)
//         cout << 1 << " ";
//     for (int i = 0; i < two; i++)
//         cout << 2 << " ";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }

//  optimal
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
    vi v(n);

    array_input_int(v, 0, n);

    int l = 0, mid = 0, r = n - 1;

    while (mid <= r)
    {
        if (v[mid] == 0)
        {
            swap(v[l], v[mid]);
            l++;
            mid++;
        }
        else if (v[mid] == 2)
        {
            swap(v[mid], v[r]);
            r--;
        }
        else
        {
            mid++;
        }
    }

    for (int i : v)
        cout << i << " ";
    newLine;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
