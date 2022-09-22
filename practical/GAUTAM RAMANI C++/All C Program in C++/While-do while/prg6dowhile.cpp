#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 1;
    do
    {
        if (i % 2 == 0)
            cout << "  " << i;
        i++;
    } while (i <= 50);
}