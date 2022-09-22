#include <iostream>
using namespace std;
int main()
{
    char i, j, a = 65;
    // for (i = 1; i <= 5; i++)
    i = 1;
    while (i <= 5)
    {
        //   for (j = 1; j <= i; j++)
        j = 1;
        while (j <= i)
        {
            cout << "\t" << a++;
            j++;
        }
        cout << "\n";
        i++;
    }
}