#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // Base condition
    if (n == 0)
        return 1;

    // Recursive call
    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n = 5;
    if (n < 0)
    {
        cout << "Error";
    }
    else
    {
        cout << factorial(n);
    }
    return 0;
}