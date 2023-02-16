#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char Source, char Aux, char Des)
{
    if (n == 1)
    {
        cout << "Move Disk " << n << " from " << Source << " to " << Des << endl;
        return;
    }

    towerOfHanoi(n - 1, Source, Des, Aux);
    cout << "Move Disk " << n << " from " << Source << " to " << Des << endl;
    towerOfHanoi(n - 1, Aux, Source, Des);
}

int main()
{
    int n;

    cout << "Enter no. of disks -> ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
