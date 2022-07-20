#include <iostream>
#include <cmath>
using namespace std;

bool funcPrime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (funcPrime(i))
        {
            cout << i << ", ";
        }
    }
    return 0;
}