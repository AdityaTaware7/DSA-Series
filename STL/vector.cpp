#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create a vector 
    vector<int> v1;// 0 element int vector
    vector<char> v2(3);// 4 element character vector
    vector<int> v3(3,5);// 3 element of 5's character vector
    
    int size;
    cout<<"enter size for vector: ";
    cin>>size;
    int element;

    // using push_back for inserting element
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element number "<<i+1<<": ";
        cin>>element;
        v1.push_back(element);
    }
    
    display(v1);


    // using pop_back
    cout<<"After implementing pop vector becomes: "<<endl;
    v1.pop_back();
    display(v1);


    // use of insert
    cout<<"After inserting element 100 at position 3 the vector becomes: "<<endl;
    // making an iterator
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter + 2,100);
    display(v1);

    // Sorting vector
    vector <int> v = {21, 4, 16, 19, 2};
    cout<<"Before sorting array is ";
    display(v);
    sort(v.begin(), v.end());     // Time complexity = O(nlog(n))
    cout<<"After sorting array becomes ";
    display(v);

    // Binary search for finding 21 in the array
    bool present = binary_search(v.begin(), v.end(), 21); // true
    cout<<"Is 21 present in the array: "<<endl;
    cout<<present;

    present = binary_search(v.begin(), v.end(), 210); // false
    cout<<"Is 210 present in the array: "<<endl;
    cout<<present;


    v.push_back(100);
    v.push_back(100);
    v.push_back(100);

    // For finding the first ocurrence of a letter 
    vector<int>::iterator it1 = lower_bound(v.begin(), v.end(), 100); // Returns position of element less than or equal to 100 also keep in mind it will return first ocurrence
    cout<<"First pos of 100 in array ";
    display(v);
    cout<<"is "<<*it1<<endl;

    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 100);// Returns pos of first element greater 100 

    // To find the count of 100 in an array
    int count = it2 - it1;
    cout<<"Number of ocurrences of 100 in the array ";
    display(v);
    cout<<count<<endl;


    return 0;
}