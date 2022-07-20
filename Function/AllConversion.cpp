#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1; // power of base 2 of 0
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1; // power of base 8 of 0
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1; // Base 16 of 0

    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int DecimalToBinary(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 2;
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int DecimalToOctal(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 8;
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

string DecimalToHexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
        x /= 16;
    }
    while (x > 0)
    {
        int lastDgit = n / x;
        n -= lastDgit * x;
        x /= 16;
        if (lastDgit <= 9)
        {
            ans = ans + to_string(lastDgit);
        }
        else
        {
            char c = 'A' + lastDgit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main()
{
    int n;
    // string n; // For Hexadecimal To Decimal Input
    cin >> n;

    // cout << binaryToDecimal(n) << endl;
    // cout << octalToDecimal(n) << endl;
    // cout << hexadecimalToDecimal(n) << endl;
    // cout << DecimalToBinary(n) << endl;
    // cout << DecimalToOctal(n) << endl;
    // cout << DecimalToHexadecimal(n) << endl;

    // Adding 2 Binary Numbers
    int a, b;
    cin >> a >> b;
    int binaryAdd = binaryToDecimal(a) + binaryToDecimal(b);
    cout << DecimalToBinary(binaryAdd);

    return 0;
}