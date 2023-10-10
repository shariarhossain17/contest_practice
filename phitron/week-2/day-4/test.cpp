// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<long long> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     vector<long long> v_sorted = v;
//     sort(v_sorted.begin(), v_sorted.end());

//     vector<long long> prefix_sum(n + 1, 0);
//     vector<long long> prefix_sum_sorted(n + 1, 0);

//     for (int i = 0; i < n; i++)
//     {
//         prefix_sum[i + 1] = prefix_sum[i] + v[i];
//         prefix_sum_sorted[i + 1] = prefix_sum_sorted[i] + v_sorted[i];
//     }

//     int m;
//     cin >> m;

//     while (m--)
//     {
//         int type, l, r;
//         cin >> type >> l >> r;

//         if (type == 1)
//         {
//             cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
//         }
//         else
//         {
//             cout << prefix_sum_sorted[r] - prefix_sum_sorted[l - 1] << endl;
//         }
//     }

//     return 0;
// }