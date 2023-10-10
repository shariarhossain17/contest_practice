#include <bits/stdc++.h>
using namespace std;

int calculateDifference(const string &s1, const string &s2)
{
    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int char1 = s1[i] - 'a';
        int char2 = s2[i] - 'a';

        diff += min(abs(char1 - char2), 26 - abs(char1 - char2));
    }

    cout << diff << endl;
    return diff;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);

        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }

        int minDifference = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = calculateDifference(words[i], words[j]);
                minDifference = min(minDifference, diff);
            }
        }

        cout << minDifference << endl;
    }

    return 0;
}
