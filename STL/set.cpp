// stores unique elements as well as enters elements in an sorted order
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;


    // inserting elements
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(8);
    s.insert(-1);
    for(int x: s)
        cout<<x<<" ";
    cout << endl;
    //displaying elements
    
    auto it = s.find(8);
    if (it == s.end())
    {
        cout<<"Element not found";
    }
    else{
        cout<<"element is present ";
        cout<<*it<<endl;
    }

    auto it2 = s.upper_bound(8); // element greater than 0
    if (it2 == s.end())
    {
        cout<<"oops element not available";
    }
    else{
        cout<<"element is "<<*it2;
    }
    
    cout<<*it2;
    

    return 0;
}