#include <bits/stdc++.h>
using namespace std;

int partition(int low, int high, int ar[])
{
    int pivot = ar[low];

    int i = low, j = high;

    while (i < j)
    {
        while (ar[i] <= pivot && i <= high)
        {
            i++;
        }
        while (ar[j] > pivot && j >= low)
        {
            j--;
        }

        if (i < j)
            swap(ar[i], ar[j]);
    }
    swap(ar[low], ar[j]);
    return j;
}

void solve(int low, int high, int ar[])
{
    if (low < high)
    {
        int part = partition(low, high, ar);

        solve(low, part - 1, ar);
        solve(part + 1, high, ar);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ar[8] = {3, 10, 2, 1, 7, 4, 10, 7};

    solve(0, 7, ar);

    for (int i = 0; i < 8; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
