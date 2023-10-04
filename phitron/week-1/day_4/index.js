
let s=1;
let t=0;
let cnt=0;
for (let a = 0; a <= s; a++)
{
    for (let b = 0; b <= s; b++)
    {
        for (let c = 0; c <= s; c++)
        {
            if (a + b + c <= s && a * b * c <= t)
            {
                cnt++;
            }
        }
    }
}

console.log(cnt);


// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         map<string, vector<int>> mp;

//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 string word;
//                 cin >> word;
//                 mp[word].push_back(i);
//             }
//         }

//         vector<int> points(3, 0);

//         for (auto it = mp.begin(); it != mp.end(); ++it)
//         {
//             vector<int> players = it->second;

//             if (players.size() == 1)
//             {
//                 points[players[0]] += 3;
//             }
//             else if (players.size() == 2)
//             {
//                 points[players[0]]++;
//                 points[players[1]]++;
//             }
//         }

//         cout << points[0] << " " << points[1] << " " << points[2] << endl;
//     }

//     return 0;
// }
