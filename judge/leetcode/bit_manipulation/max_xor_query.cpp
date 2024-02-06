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

    int n, maxBit;
    cin >> n >> maxBit;

    vector<int> v(n);

    array_input_int(v, 0, n);

    vector<int> preXor(n);

    preXor[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        preXor[i] = preXor[i - 1] ^ v[i];
    }

    int e = (1 << maxBit);

    vector<int> result;

    for (int i = preXor.size() - 1; i >= 0; i--)
    {
        result.push_back((e - 1) ^ preXor[i]);
    }

    for (int i : result)
        cout << i << " ";

    return 0;
}
