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

    for(int j = 0; j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}