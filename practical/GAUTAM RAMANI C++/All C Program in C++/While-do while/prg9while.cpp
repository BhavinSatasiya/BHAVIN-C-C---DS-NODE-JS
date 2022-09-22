#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 65;
    while (i <= 90)
    {
        cout << "  " << (char)i << "=" << i;
        i++;
    }
}