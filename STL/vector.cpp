#include <iostream>
#include <vector>
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

    return 0;
}