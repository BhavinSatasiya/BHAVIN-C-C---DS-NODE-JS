#include <iostream>
using namespace std;
int main()
{
    int i, n, a = 1;
    cout << "N=";
    cin >> n;
    // for(i=1;i<=n;i++)
    i = 1;
    do
    {
        cout << "  " << a * i;
        a = a + a;
        i++;
    } while (i <= n);
}