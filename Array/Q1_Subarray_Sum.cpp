#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<n-1;i++)
    {
        for(int j = i;j<n-1;j++)
        {
            sum += arr[j];
            cout<<sum<<" | ";
        }
    }
    cout<<endl<<"Total Number of Arrays :- "<<n*(n+1)/2<<endl;
    cout<<"Sum of Subarrays :- "<<sum;
    return 0;
}