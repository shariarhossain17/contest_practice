#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> result;

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> ar;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                ar.push_back(v[j]);
            }
        }

        result.push_back(ar);
    }

    // for (const vector<int> &subset : result)
    // {
    //     for (int element : subset)
    //     {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
