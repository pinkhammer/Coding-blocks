#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int even_sum = 0;
        int odd_sum = 0;

        while (n > 0)
        {
            // int rem = n%10;
            if ((n % 10) % 2 == 0)
            {
                //even sum me add
                even_sum = even_sum + n % 10;
            }
            else
            {
                //odd sum me add
                odd_sum += n % 10;
            }
            n = n / 10;
        }

        if (even_sum % 4 == 0 || odd_sum % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}