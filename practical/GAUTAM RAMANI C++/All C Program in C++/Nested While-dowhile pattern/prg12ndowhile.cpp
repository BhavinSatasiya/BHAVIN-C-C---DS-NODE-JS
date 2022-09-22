#include <iostream>
using namespace std;
int main()
{
    char i, j, a = 65;
    i = 65;
    do
    {
        a = i;
        j = 65;
        do
        {
            cout << "\t" << a;
            a--;
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 69);
}