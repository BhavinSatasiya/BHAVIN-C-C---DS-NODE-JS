#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "N=";
    cin >> n;
    // for (i = 1; i <= n; i += 2)
    i = 1;
    while (i <= n)
    {
        cout << "  " << (char)(i + 64);
        i += 2;
    }
}