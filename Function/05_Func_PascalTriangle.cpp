// nCr = n!/(n-r)!*r!
/*
1
11
121
1331
14641
*/
#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

void pascalTriangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pascalTriangle(n);
    return 0;
}