//Time Complexity = o(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -2;
}

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

    int key;
    cout << "Enter Key to Find Value ";
    cin >> key;

    cout << "Value Found at " << linearSearch(arr, n, key) + 1 << endl;

    return 0;
}