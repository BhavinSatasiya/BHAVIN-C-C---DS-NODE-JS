#include <iostream>
using namespace std;
int main()
{
    int i, j, a = 1;
    // for (i = 1; i <= 5; i++)
    i = 1;
    do
    {
        j = 1;
        do
        // for (j = 1; j <= i; j++)
        {
            cout << "\t" << a++;
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 5);
}