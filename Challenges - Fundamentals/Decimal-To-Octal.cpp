#include <iostream>
using namespace std;
int main()
{
    int n, r, Count = 1, finalans = 0;
    cin >> n;

    while (n != 0)
    {
        r = n % 8;
        finalans = finalans + r * Count;
        Count = Count * 10;
        n = n / 8;
    }

    cout << finalans << endl;
    return 0;
}