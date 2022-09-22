#include <iostream>
using namespace std;
int main()
{
    int i;
    // for (i = 65; i <= 90; i++)
    i = 65;
    do
    {
        cout << "  " << (char)i << "=" << (char)(i + 32);
        i++;
    } while (i <= 90);
}