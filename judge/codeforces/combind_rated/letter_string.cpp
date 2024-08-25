#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

long long count_pairs(vector<string> &strings)
{
    unordered_map<string, int> freq;
    long long total_pairs = 0;

    for (const auto &s : strings)
    {

        for (int i = 0; i < 2; ++i)
        {
            char original_char = s[i];

            for (char ch = 'a'; ch <= 'k'; ++ch)
            {
                if (ch == original_char)
                    continue;

                string modified_string = s;
                modified_string[i] = ch;

                if (freq.find(modified_string) != freq.end())
                {
                    total_pairs += freq[modified_string];
                }
            }
        }

        freq[s]++;
    }

    return total_pairs;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> strings(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> strings[i];
        }

        cout << count_pairs(strings) << endl;
    }

    return 0;
}
