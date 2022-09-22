#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter n:";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        cout << "  " << i;
        i++;
    }
}