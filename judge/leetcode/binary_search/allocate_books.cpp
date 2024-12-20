#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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

int countStudents(vector<int> &arr, int pages)
{
    int n = arr.size();
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesStudent + arr[i] <= pages)
        {

            pagesStudent += arr[i];
        }
        else
        {
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vi arr(n);
    array_input_int(arr, 0, n);

    if (n < m)
        cout << "-1";

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    int ans;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (countStudents(arr, mid) > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low << endl;
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
