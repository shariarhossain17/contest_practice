#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void pair_cards(vector<pair<int, char>> &suit, vector<pair<int, char>> &tramp, vector<pair<string, string>> &ans, char c, int &t_use, bool &f)
{
    if (suit.empty() || suit[0].second == c)
        return;

    if (suit.size() % 2 == 0)
    {
        for (int i = 0; i < suit.size(); i += 2)
        {
            string first, second;
            first += to_string(suit[i].first);
            first += suit[i].second;
            second += to_string(suit[i + 1].first);
            second += suit[i + 1].second;
            ans.push_back({first, second});
        }
    }
    else
    {
        if (t_use >= tramp.size())
        {
            f = true;
        }
        else
        {
            for (int i = 0; i < suit.size() - 1; i += 2)
            {
                string first, second;
                first += to_string(suit[i].first);
                first += suit[i].second;
                second += to_string(suit[i + 1].first);
                second += suit[i + 1].second;
                ans.push_back({first, second});
            }
            string first, second;
            first += to_string(suit.back().first);
            first += suit.back().second;
            second += to_string(tramp[t_use].first);
            second += tramp[t_use].second;
            ans.push_back({first, second});
            t_use++;
        }
    }
}

void solve(int &t_use, bool &f)
{
    int n;
    cin >> n;

    char c;
    cin >> c;

    vector<pair<int, char>> cards, dimonds, hearts, spread, tramp;

    for (int i = 0; i < pow(2, n); i++)
    {
        string s;
        cin >> s;

        if (s[1] == c)
            tramp.push_back({s[0] - 48, s[1]});
        else if (s[1] == 'C')
            cards.push_back({s[0] - 48, s[1]});
        else if (s[1] == 'D')
            dimonds.push_back({s[0] - 48, s[1]});
        else if (s[1] == 'H')
            hearts.push_back({s[0] - 48, s[1]});
        else if (s[1] == 'S')
            spread.push_back({s[0] - 48, s[1]});
    }

    sort(cards.begin(), cards.end());
    sort(dimonds.begin(), dimonds.end());
    sort(hearts.begin(), hearts.end());
    sort(spread.begin(), spread.end());
    sort(tramp.begin(), tramp.end());

    vector<pair<string, string>> ans;
    // int t_use = 0;
    // bool f = false;

    // Pair cards of each suit
    pair_cards(cards, tramp, ans, c, t_use, f);
    pair_cards(dimonds, tramp, ans, c, t_use, f);
    pair_cards(spread, tramp, ans, c, t_use, f);
    pair_cards(hearts, tramp, ans, c, t_use, f);

    int res = tramp.size() - t_use;

    // After pairing suits, we check the remaining tramp cards
    if (res % 2 == 0)
    {
        for (int i = t_use; i < tramp.size(); i += 2)
        {
            string first, second;
            first += to_string(tramp[i].first);
            first += tramp[i].second;
            second += to_string(tramp[i + 1].first);
            second += tramp[i + 1].second;
            ans.push_back({first, second});
        }
    }
    else
    {
        f = true;
    }

    if (f || ans.empty())

    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (auto &i : ans)
        {
            cout << i.first << " " << i.second << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int t_use = 0;
        bool f = false;

        solve(t_use, f); // Process each test case independently
    }
    return 0;
}
