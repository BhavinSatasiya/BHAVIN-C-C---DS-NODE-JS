#include <iostream>
using namespace std;
int main()
{
    int i;
    i = 65;
    do
    {
        cout << "  " << (char)(i) << " " << (char)(i + 34);
        i += 4;
    } while (i <= 90);
}