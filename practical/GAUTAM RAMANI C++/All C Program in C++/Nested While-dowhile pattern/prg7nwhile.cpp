#include <iostream>
using namespace std;
int main()
{
    char a = 65;
    int i, j;
    // for (i = 1; i <= 5; i++)
    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            //  for (j = 1; j <= i; j++)

            if (i % 2 != 0)
            {
                cout << "\t" << a;
                a++;
            }
            else
            {
                cout << "\t" << (char)(a + 32);
                a++;
            }
            j++;
        }
        cout << "\n";
        i++;
    }
}