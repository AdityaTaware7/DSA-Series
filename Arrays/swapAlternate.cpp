#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    print(arr, n);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    print(arr, n);

    swapAlternate(arr, n);
    return 0;
}