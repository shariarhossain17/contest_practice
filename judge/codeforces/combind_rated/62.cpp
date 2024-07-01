#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b = 0, c, d = 0;
    cin >> a;
    vector<int> ar(a);

    // Read input array
    for (int i = 0; i < a; ++i)
    {
        cin >> ar[i];
        b += ar[i];
    }

    for (int i = 0; i < a; ++i)
    {
        for (int j = i; j < a; ++j)
        {
            c = b;
            for (int k = i; k <= j; ++k)
            {
                if (ar[k] == 1)
                {
                    c--;
                }
                else
                {
                    c++;
                }
            }
            d = max(d, c);
        }
    }

    cout << d << endl;
    return 0;
}
