#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 1;
    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            if (a % 2 != 0)
            {
                cout << "\t1";
                a++;
            }
            else
            {
                cout << "\t0";
                a++;
            }
            j++;
        }
        cout << "\n";
        i++;
    }
}