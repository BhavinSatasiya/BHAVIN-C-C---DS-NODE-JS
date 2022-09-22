#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "N=";
    cin >> n;
    // for (i = 0; i <= n; i++)
    i = 0;
    while (i <= n)
    {
        cout << "  " << i * i;
        i++;
    }
}