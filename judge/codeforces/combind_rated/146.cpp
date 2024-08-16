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

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
    }

    double total_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x1 = points[i].first;
        int y1 = points[i].second;
        int x2 = points[i + 1].first;
        int y2 = points[i + 1].second;

        total_distance += sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    double time_per_signature = total_distance / 50.0;
    double total_time = k * time_per_signature;

    cout << fixed << setprecision(6) << total_time << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
