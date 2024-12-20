#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long cnt = 1;
        while (n > 0)
        {
            long long d = n % 10;
            n /= 10;
            int mul = 0;
            for (int i = 0; i <= d; ++i)
            {
                for (int j = 0; j <= d; ++j)
                {
                    if (d - i - j >= 0)
                    {
                        mul++;
                    }
                }
            }
            cnt *= mul;
        }
        cout << cnt << endl;
    }
    return 0;
}
