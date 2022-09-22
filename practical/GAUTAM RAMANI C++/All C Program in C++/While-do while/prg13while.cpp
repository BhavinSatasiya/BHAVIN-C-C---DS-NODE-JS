#include <iostream>
using namespace std;
int main()
{
    int i, n, a = 1;
    cout << "N=";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        cout << "  " << a;
        a = a + a;
        i++;
    }
}