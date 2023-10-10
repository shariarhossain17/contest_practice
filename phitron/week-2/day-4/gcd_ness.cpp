#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; i++)
    {
        cin >> sequence[i];
    }

    const int max_value = 1000;
    vector<int> gcdness(max_value + 1, 0);

    for (int k = 2; k <= max_value; k++)
    {
        for (int num : sequence)
        {
            if (num % k == 0)
            {
                gcdness[k]++;
            }
        }
    }

    int max = 0;
    int ans = 0;
    for (int i = 0; i < max_value; i++)
    {

        if (gcdness[i] > max)
        {
            max = gcdness[i];
            ans = i;
        }
    }

    cout << ans;
    return 0;
}