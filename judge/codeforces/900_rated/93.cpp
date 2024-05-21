#include <iostream>
#include <string>
using namespace std;

string solveTestCase(int n, string instructions)
{
    int rover_x = 0, rover_y = 0;
    int helicopter_x = 0, helicopter_y = 0;
    string decisions;

    for (char instruction : instructions)
    {
        if (abs(rover_x) + abs(rover_y) <= abs(helicopter_x) + abs(helicopter_y))
        {
            if (instruction == 'N')
            {
                rover_y += 1;
            }
            else if (instruction == 'S')
            {
                rover_y -= 1;
            }
            else if (instruction == 'E')
            {
                rover_x += 1;
            }
            else if (instruction == 'W')
            {
                rover_x -= 1;
            }
            decisions += 'R';
        }
        else
        {
            if (instruction == 'N')
            {
                helicopter_y += 1;
            }
            else if (instruction == 'S')
            {
                helicopter_y -= 1;
            }
            else if (instruction == 'E')
            {
                helicopter_x += 1;
            }
            else if (instruction == 'W')
            {
                helicopter_x -= 1;
            }
            decisions += 'H';
        }
    }

    if (rover_x == helicopter_x && rover_y == helicopter_y)
    {
        return decisions;
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n; // Number of instructions for current test case
        string instructions;
        cin >> instructions; // Instructions for current test case
        string result = solveTestCase(n, instructions);
        cout << result << endl;
    }

    return 0;
}
