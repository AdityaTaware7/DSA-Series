#include <bits/stdc++.h>

using namespace std;

int partition(int l, int h, vector<int> &a)
{
    int pivot = a[h];
    int i = l;
    int j = h;
    while(i < j)
    {
        while(a[i] <= pivot)    i++;
        while(a[j] > pivot)     j--;
        
        if(i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[l]);
    return j;
}

void quicksort(vector<int> &v, int l, int h)
{
    if(l < h)
    {
        int pivot = partition(l,h,v);
        quicksort(v, l, pivot-1);
        quicksort(v, pivot+1, h);
    }
}

int main()
{
    vector<int> v = {6,1,8,3,4,2};
    for(int i = 0; i < v.size(); i++)
        cout<<v[i];
    cout<<endl;
    quicksort(v, 0, v.size()-1);
    for(int i = 0; i < v.size(); i++)
        cout<<v[i];
    cout<<endl;
    return 0;
}