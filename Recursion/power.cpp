#include <iostream>

using namespace std;

int power(int x, int n)
{
    // Base condition
    if (n == 0)
        return 1;

    // Recursive call
    int ans = x * power(x, n - 1);
    return ans;
}

int main()
{
    int x = 2;
    int n = 5;
    cout << power(x, n);

    return 0;
}