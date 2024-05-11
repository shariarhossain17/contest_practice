#include <bits/stdc++.h>
using namespace std;

// o(sqrt)complexity
bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// o(n) time complexity
// bool prime(int n)
// {
//     if (n == 1)
//         return false;

//     if (n == 2)
//         return true;

//     for (int i = 3; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }

//     return true;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << prime(n);

    return 0;
}