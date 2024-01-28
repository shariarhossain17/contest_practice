#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> images;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> v;

        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        images.push_back(v);
    }

    vector<vector<int>> result;

    for (const vector<int> &row : images)
    {

        vector<int> final_ar;

        for (int i = row.size() - 1; i >= 0; i--)
        {
            final_ar.push_back((row[i] ^ 1));
        }

        result.push_back(final_ar);
    }

    return 0;
}