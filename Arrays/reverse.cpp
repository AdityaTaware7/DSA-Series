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

// Method 1 Reverse array by creating new array
void reverse1(int arr[], int n)
{
    int arr2[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arr2[j] = arr[i];
        j++;
    }
    print(arr2, n);
}

// Method 2 swapping array contents
void reverse2(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    for (i = 0; i < n / 2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        swap(arr[i], arr[j]);
        j--;
    }
    print(arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    // reverse1(arr, n);
    reverse2(arr, n);
    return 0;
}