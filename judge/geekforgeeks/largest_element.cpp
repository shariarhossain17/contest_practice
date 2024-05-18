

#include <bits/stdc++.h>
using namespace std;

int solve(int ar[], int n)
{

    int largest = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > largest)
            largest = ar[i];
    }

    return largest;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    cout << solve(ar, n);
    return 0;
}