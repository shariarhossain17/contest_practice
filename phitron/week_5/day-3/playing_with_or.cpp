#include <bits/stdc++.h>
using namespace std;

int func(int n, int k, vector<int> &a)
{
    int count = 0;

    for (int i = 0; i < n - k + 1; ++i)
    {
        bool anyOdd = false;
        for (int j = 0; j < k; ++j)
        {
            if (a[i + j] % 2 == 1)
            {
                anyOdd = true;
                break;
            }
        }
        if (anyOdd)
            count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }
        int result = func(n, k, a);
        results.push_back(result);
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
