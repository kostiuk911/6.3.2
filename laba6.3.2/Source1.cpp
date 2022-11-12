#include <iostream>

using namespace std;

void fill(double* pMem, int n);
int findMinIndex(double* pMem, int n);

int main()
{
    int n;
    cout << "Enter array size: "; cin >> n;
    double* pMem = new double[n];
    cout << "Please fill array: ";
    fill(pMem, n);
    cout << "Minimal index is: ";
    findMinIndex(pMem, n);
    delete[n] pMem;
}

void fill(double* pMem, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> pMem[i];
    }
}

int findMinIndex(double* pMem, int n)
{
    double min = pMem[0];
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > pMem[i])
        {
            return findMinIndex(pMem, n);
            minIndex = i;
        }
    }
    cout << min;
    return minIndex;
}