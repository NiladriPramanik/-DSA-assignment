#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string hour_string = s.substr(0, 2);
    string rest = s.substr(2, 6);
    string newTime = "";

    int hour = stoi(hour_string);

    string t = s.substr(8);

    if (t != "AM")
    {
        if (hour + 12 < 24)
            hour_string = to_string(hour + 12);
    }
    else
    {
        if (hour == 12)
            hour_string = "00";
    }

    newTime = hour_string + rest;
    cout << newTime;
}
