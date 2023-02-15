#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    int k, a = 0;

    cin >> s;
    cin >> t;
    cin >> k;

    for (int i = 0; i < min(s.size(), t.size()); i++)
    {
        if (s[i] != t[i])
        {
            break;
        }
        a++;
    }

    int min = (s.size() - a) + (t.size() - a);
    int max = s.size() + t.size();

    if ((k >= max) || (k >= min && (k - min) % 2 == 0))

    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
