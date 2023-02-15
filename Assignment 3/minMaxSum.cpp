#include <bits/stdc++.h>
using namespace std;

int main()
{
    long sum = 0;

    vector<long> A(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
        sum += A[i];
    }

    long min = A[0], max = A[0];

    for (int i = 0; i < 5; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }

        if (A[i] < min)
        {
            min = A[i];
        }
    }

    cout << (sum - max) << " " << (sum - min) << endl;
}
