#include <iostream>
using namespace std;
int main()
{
    int i, j;
    i = 5;
    while (i >= 1)
    {
        j = 5;
        while (j >= i)
        {
            cout << "\t" << j;
            j--;
        }
        cout << "\n";
        i--;
    }
}