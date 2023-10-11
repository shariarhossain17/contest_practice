#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int max_neighbors = X / Y;
        cout << (max_neighbors < 20 ? max_neighbors : 20) << endl;
    }

    return 0;
}
