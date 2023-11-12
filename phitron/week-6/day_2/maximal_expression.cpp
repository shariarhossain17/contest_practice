#include <iostream>
using namespace std;
#define ll long long
int find_maximum(int n, int k)
{
    ll max_value = -1;
    ll max_x = -1;

    for (int x = 0; x <= n; x++)
    {
        int value = (x % k) * ((n - x) % k);
        if (value > max_value)
        {
            max_value = value;
            max_x = x;
        }
    }

    return max_x;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll result = find_maximum(n, k);
        cout << result << endl;
    }

    return 0;
}
