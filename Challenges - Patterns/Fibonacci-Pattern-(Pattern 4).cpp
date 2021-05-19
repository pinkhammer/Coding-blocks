// 0 
// 1 1
// 2 3 5
// 8 13 21 34

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int first_number = -1;
    int second_number = 1;

    ///////////////////////
    int breaking_point = 1;
    int x = 2;
    ///////////////////////

    for (int i = 1; i <= ((n) * (n + 1) / 2); i++)
    {

        int ans = first_number + second_number;
        cout << ans << " ";

        ///////////////////////
        if (breaking_point == i)
        {
            cout << endl;
            breaking_point = (x) * (x + 1) / 2;
            x++;
        }
        ///////////////////////

        first_number = second_number;
        second_number = ans;
    }

    return 0;
}