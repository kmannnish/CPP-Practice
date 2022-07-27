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

    int maxNo = INT_MIN, minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
        // if (array[i] > maxNo)
        // {
        //     maxNo = array[i];
        // }
        // if (array[i] < minNo)
        // {
        //     minNo = array[i];
        // }
    }

    cout << "Maximum - " << maxNo << endl << "Minimum - " << minNo;
    return 0;
}