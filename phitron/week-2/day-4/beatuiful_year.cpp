#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year)
{
    vector<bool> visited(10, false);

    while (year > 0)
    {
        int digit = year % 10;
        if (visited[digit])
        {
            return false;
        }
        visited[digit] = true;
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        if (hasDistinctDigits(++y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
