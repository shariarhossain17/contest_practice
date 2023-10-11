#include <bits/stdc++.h>
using namespace std;
int max_score(vector<int> rolls)
{
    sort(rolls.begin(), rolls.end());
    int score = 0;
    for (int i = 0; i < 3; i++)
    {
        score = score * 10 + rolls[i];
    }
    return score;
}

int main()
{
    int T;
    cin >> T;

    vector<string> results;

    for (int t = 0; t < T; t++)
    {
        vector<int> alice, bob;
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            alice.push_back(val);
        }
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            bob.push_back(val);
        }

        int alice_score = max_score(alice);
        int bob_score = max_score(bob);

        if (alice_score > bob_score)
        {
            results.push_back("Alice");
        }
        else if (bob_score > alice_score)
        {
            results.push_back("Bob");
        }
        else
        {
            results.push_back("Tie");
        }
    }

    for (int t = 0; t < T; t++)
    {
        cout << results[t] << endl;
    }

    return 0;
}

// 3
// 3 2 5 6 1 1
// 4 4 5 5 4 4
// 6 6 6 6 6 1