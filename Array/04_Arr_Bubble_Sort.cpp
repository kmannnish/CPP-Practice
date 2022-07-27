/*
Bubble Sort
Reapetedly swap two adjacent elements if they are in wrong order
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Length of Array ";
    cin >> n;

    int arr[n];
    cout << "Enter the Value inside Array ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}