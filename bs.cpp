#include <iostream>
using namespace std;

int main()
{

    int Binsearch;
    const int n = 5;
    int A[n] = { 1,2,3,4,5 };
    int x;



    cout << "find this -> ";
    cin >> x;

    cout << BinSearch(A, n, x);

    return 0;

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