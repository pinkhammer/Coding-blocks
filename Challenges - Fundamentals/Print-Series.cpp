#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int times = 1;

    for (int i = 0; i < n1; i++)
    {
        int x = 3 * times + 2;
        if (x % n2 == 0)
        {
            n1++;
        }
        else
        {
            cout << x << endl;
        }
        times++;
    }

    return 0;
}