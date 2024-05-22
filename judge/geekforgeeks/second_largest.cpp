#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> ar, int n)
{
    int largest = INT_MIN;
    int secondLargest = -1;

    sort(ar.begin(), ar.end());

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > largest)
        {
            secondLargest = largest;
            largest = ar[i];
        }
    }

    cout << secondLargest;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    solve(v, n);

    return 0;
}