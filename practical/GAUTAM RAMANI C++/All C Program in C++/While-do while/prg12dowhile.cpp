#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "N=";
    cin >> n;
    // for (i = 1; i <= n; i++)
    i = 1;
    do
    {
        if (i % 2 != 0)
            cout << "  " << i;
        else
            cout << "  " << i * i;
        i++;
    } while (i <= n);
}