#include <iostream>
using namespace std;
int main()
{
    char i, j;
    // for (i = 65; i <= 69; i++)
    i = 65;
    do
    {
        j = 65;
        do
        //  for (j = 65; j <= i; j++)
        {
            cout << "\t" << j;
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 69);
}