#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void sort(vector<int> &A)
{
    int n = A.size();
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

int main()
{
    vector<int> A = {6, 1, 2, 3, 4, 6, 1};

    sort(A);
    cout << "sorted vector: ";
    printVector(A);

    return 0;
}
