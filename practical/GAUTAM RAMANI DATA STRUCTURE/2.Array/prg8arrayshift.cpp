#include <iostream>
using namespace std;
int main()
{
    int a, i, n, pos, len;
    cout << "Number of Element Of Array:" << endl;
    cin >> a;
    int array[a];
    cout << "Enter Element of Array:";
    for (i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    len = a;
    cout << "Array is:";
    for (i = 0; i < len; i++)
    {
        cout << " " << array[i] << " ";
    }
    cout << "\nEnter Position You want to add Element:" << endl;
    cin >> pos;
    cout << "Enter Element you want to Add:" << endl;
    cin >> n;
    for (i = len; i > pos - 1; i--)
    {
        array[i] = array[i - 1];
    }
    len++;
    array[pos - 1] = n;
    for (i = 0; i < len; i++)
    {
        cout << " " << array[i] << " ";
    }
}