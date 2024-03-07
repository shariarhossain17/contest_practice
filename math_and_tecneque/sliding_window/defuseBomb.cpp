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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;

    cin >> n >> k;
    vector<int> ar(n);

    ar.insert(ar.end(), ar.begin(), ar.end());

    array_input_int(ar, 0, n);

    vi res(n, 0);

    // for (int i : ar)
    // {
    //     cout << i << endl;
    // }

    if (k == 0)
    {
    }
    else if (k > 0)
    {
        int i = 0, j = 1, sum = 0;
        while (i < n)
        {
            sum += ar[j];
            if (j - i == k)
            {
                cout << sum << endl;
                i++;
                sum -= ar[i];
            }
            j++;
        }
    }

    return 0;
}
