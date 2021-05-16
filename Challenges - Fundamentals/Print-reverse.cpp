#include <iostream>
using namespace std;
int main()
{
    int N, y = 0;
    cin >> N;
    while (N != 0)
    {
        y = y * 10 + N % 10;
        N = N / 10;
    }
    cout << y;
    return 0;
}