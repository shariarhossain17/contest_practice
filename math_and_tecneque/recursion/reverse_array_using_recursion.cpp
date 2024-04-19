#include <bits/stdc++.h>
using namespace std;

void f(int l, int r, int ar[])
{

    if (l > r)
        return;

    int tmp = ar[l];
    ar[l] = ar[r];
    ar[r] = tmp;

    f(l + 1, r - 1, ar);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ar[5] = {1, 7, 4, 3, 2};

    f(0, 4, ar);

    for (int i = 0; i < 5; i++)
        cout << ar[i] << endl;
    return 0;
}