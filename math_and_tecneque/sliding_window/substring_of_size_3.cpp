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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    int k = 3;

    int i = 0, j = 0;

    int frq[26] = {0};

    int cnt = 0;

    while (j < n)
    {

        frq[s[j] - 'a']++;

        if (k == j - i + 1)
        {

            bool tmp = true;

            for (int c = 0; c < 26; c++)
            {
                if (frq[c] > 1)
                {
                    tmp = false;
                    break;
                }
            }

            if (tmp)
                cnt++;

            frq[s[i] - 'a']--;

            i++;
        }

        j++;
    }

    cout << cnt;

    return 0;
}