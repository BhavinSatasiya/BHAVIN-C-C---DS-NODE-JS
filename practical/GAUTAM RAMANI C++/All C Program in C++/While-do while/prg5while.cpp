#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter n:";
    cin >> n;
    // for (i = -n; i <= n; i++)
    i = -n;
    while (i <= n)
    {
        cout << "  " << i;
        i++;
    }
}