#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i-1;
        while(j >= 0 && x < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {3,65,2,44,23,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
