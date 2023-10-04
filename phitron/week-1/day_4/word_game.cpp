#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        map<string, vector<int>> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                mp[word].push_back(i);
            }
        }

        vector<int> v(3, 0);

        for (auto it = mp.begin(); it != mp.end(); it++)
        {

            vector<int> player = it->second;

            if (player.size() == 1)
                v[player[0]] += 3;
            else if (player.size() == 2)
            {
                v[player[0]]++;
                v[player[1]]++;
            }
        }

        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }
    return 0;
}

// bujiya nita hbe