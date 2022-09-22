#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 1;
    while (i <= 50)
    {
        if (i % 2 != 0)
            cout << "  " << i;
        i++;
    }
}