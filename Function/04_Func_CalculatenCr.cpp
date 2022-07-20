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

int main()
{
    int n, r;
    cout << "Formula is nCr" << endl
         << "Enter Value n : ";
    cin >> n;
    cout << "Enter Value r : ";
    cin >> r;

    int nCr = fact(n) / (fact(n - r) * fact(r));
    cout << "Answer : " << nCr;
    return 0;
}