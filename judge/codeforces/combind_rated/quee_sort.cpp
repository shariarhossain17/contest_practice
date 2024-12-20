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

bool is_sorted(vector<int> &v, int idx)
{
    for (int i = idx; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    int mini = *min_element(v.begin(), v.end());

    vi v1;
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mini)
        {
            idx = i;
            break;
        }
        v1.push_back(v[i]);
    }

    if (!is_sorted(v, idx))
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int ans = v1.size();

        if (v1.empty())
        {
            cout << "0\n";
            return;
        }
        else
        {

            cout << ans << endl;

            // vector<int> sortedArr = v1;
            // sort(sortedArr.begin(), sortedArr.end());

            // unordered_map<int, int> sortedPos;
            // for (int i = 0; i < v1.size(); i++)
            // {
            //     sortedPos[sortedArr[i]] = i;
            // }

            // int totalMoves = 0;

            // for (int i = 0; i < v1.size(); i++)
            // {
            //     int currentPos = i;
            //     int finalPos = sortedPos[v1[i]];

            //     if (currentPos > finalPos)
            //     {
            //         totalMoves += (currentPos - finalPos);
            //     }
            // }

            // cout << v1.size() << " " << totalMoves << endl;

            // if (totalMoves <= v1.size())
            // {
            //     cout << v1.size() << endl;
            // }
            // else
            // {
            //     cout << "-1\n";
            //     cout << "hello";
            // }
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
        solve();
    }
    return 0;
}
