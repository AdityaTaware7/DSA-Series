#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i = 0;
    int j;
    int k = i;
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[k])
            {
                k = j;
            }
        }
        swap(arr[k],arr[i]);
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
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
