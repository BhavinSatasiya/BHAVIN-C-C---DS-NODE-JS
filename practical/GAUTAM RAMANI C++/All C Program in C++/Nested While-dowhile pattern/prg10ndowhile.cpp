#include <iostream>
using namespace std;
int main()
{
    int i, j;
    i = 5;
    do
    {
        j = i;
        do
        {
            cout << "\t" << j;
            j++;
        } while (j <= 5);
        cout << "\n";
        i--;
    } while (i >= 1);
}