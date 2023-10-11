#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> twoGramCount;
    for (int i = 0; i < n - 1; i++)
    {
        string twoGram = s.substr(i, 2);
        twoGramCount[twoGram]++;
    }

    string mostFrequentTwoGram;
    int maxCount = 0;

    for (const auto &pair : twoGramCount)
    {
        if (pair.second > maxCount)
        {
            mostFrequentTwoGram = pair.first;
            maxCount = pair.second;
        }
    }

    cout << mostFrequentTwoGram << endl;
    return 0;
}