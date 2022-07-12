#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void uniqueElement(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i];
            break;
        }
    }
}

int main()
{
    int arr[7] = {1,2,3,6,3,6,2};
    // int arr[5] = {2, 4,7,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    uniqueElement(arr, n);
    return 0;
}