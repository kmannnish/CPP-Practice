/* Array is a List of Similar Data Types.

Example:-
datatype arrayName[size];
int arrray[4] = {10, 20, 30, 40}
    int Size is 4bytes
4(array size) * 4bytes = 16bytes

Address are in Hexadecimal .

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of Array :- ";
    cin >> n;

    int array[n];

    cout << "Enter Values in Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "At " << i + 1 << " :- ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ", ";
    }
    return 0;
}