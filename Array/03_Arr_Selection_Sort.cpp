// Sorting is Arranging Elements of Array in Ascending/Descending order.

// Selection Sort :- Find the minimum element in unsorted array and swap it with element at begining.


// This is not write Code for Selection code 
// It is Bubble sort Code


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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}