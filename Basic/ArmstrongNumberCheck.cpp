#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int orginalN = n;

    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        // sum += pow(lastdigit,3);
        sum += (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == orginalN)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}
