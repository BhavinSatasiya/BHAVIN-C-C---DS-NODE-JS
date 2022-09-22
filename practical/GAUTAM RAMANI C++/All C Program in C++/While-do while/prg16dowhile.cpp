#include <iostream>
using namespace std;
int main()
{
    int n, n1 = 0, n2 = 1, n3 = 1, i;
    cout << "n=";
    cin >> n;
    // for (i = 1; i <= n; i++)
    i = 1;
    do
    {
        cout << "  " << n3;
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    } while (i <= n);
}