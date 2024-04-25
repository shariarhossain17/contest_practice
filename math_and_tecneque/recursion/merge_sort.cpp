#include <bits/stdc++.h>
using namespace std;

void merge(int ar[], int low, int mid, int high)
{
    vector<int> v;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (ar[left] < ar[right])
        {
            v.push_back(ar[left]);
            left++;
        }
        else
        {
            v.push_back(ar[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        v.push_back(ar[left]);
        left++;
    }
    while (right <= high)
    {
        v.push_back(ar[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        ar[i] = v[i - low];
    }
}
void solve(int ar[], int low, int high)
{

    if (low == high)
        return;
    int mid = (high + low) / 2;

    solve(ar, low, mid);
    solve(ar, mid + 1, high);
    merge(ar, low, mid, high);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ar[5] = {2, 3, 1, 7, 6};

    solve(ar, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << ar[i] << " ";
    return 0;
}