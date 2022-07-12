/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void reverse(int arr[], int l, int r)
{
    // Base condition
    if (l >= r)
        return;

    swap(arr[l], arr[r]);

    // Recursive call
    reverse(arr, l + 1, r - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}