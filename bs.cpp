#include <iostream>
using namespace std;

int main()
{
}

int BinSearch(int* M, int n, int k)
{
    int L = 0;
    int R = n;

    int m;
    int z = 0;

    while (L < R)
    {
        z++;
        m = (L + R) / 2;
        if (k > M[m]) L = m;
        if (k < M[m]) R = m;
        if (k == M[m]) break;
    }

    return 0;
}