#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    // Creating istringstream object from the input string s
    istringstream iss(s);

    string hours_str, minutes_str, am_pm;

    getline(iss, hours_str, ':');
    getline(iss, minutes_str, ' ');

    int hours = stoi(hours_str);
    int minutes = stoi(minutes_str);

    string new_hours;
    if (hours >= 12)
    {
        if (hours > 12)
            hours -= 12;
        new_hours = to_string(hours);
        am_pm = "PM";
    }
    else
    {
        if (hours == 0)
            hours = 12;
        new_hours = to_string(hours);
        am_pm = "AM";
    }

    if (stoi(new_hours) <= 9)
    {
        new_hours = '0' + new_hours;
    }

    cout << new_hours + ":" + minutes_str + " " + am_pm << endl;
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
