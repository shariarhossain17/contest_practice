#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<long long>> findFactors(long long k)
{
    vector<vector<long long>> factors;
    for (long long a = 1; a * a * a <= k; ++a)
    {
        if (k % a == 0)
        {
            for (long long b = a; b * b <= k / a; ++b)
            {
                if (k % (a * b) == 0)
                {
                    long long c = k / (a * b);
                    factors.push_back({a, b, c});
                    if (a != b)
                        factors.push_back({a, c, b});
                    if (b != c)
                        factors.push_back({b, a, c});
                    if (a != c)
                        factors.push_back({b, c, a});
                    if (a != b && a != c)
                        factors.push_back({c, a, b});
                    if (b != c && a != c)
                        factors.push_back({c, b, a});
                }
            }
        }
    }
    return factors;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, k;

        cin >> x >> y >> z >> k;

        vector<vector<long long>> factors = findFactors(k);

        long long maxLocations = 0;
        for (const auto &factor : factors)
        {
            long long a = factor[0], b = factor[1], c = factor[2];
            if (a <= x && b <= y && c <= z)
            {
                long long positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
                maxLocations = max(maxLocations, positions);
            }
        }

        cout << maxLocations << endl;
    }

    return 0;
}
