#include <iostream>
using namespace std;
int main()
{
    char a = 65;
    int i, j;
    i = 1;
    do
    {
        j = 1;
        do
        {
            if (j % 2 != 0)
            {
                cout << "\t" << (char)(a + 32);
                a++;
            }
            else
            {
                cout << "\t" << a;
                a++;
            }
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 5);
}