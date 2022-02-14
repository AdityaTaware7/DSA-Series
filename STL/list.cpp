#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void displayl3(list<int> l)
{
    list<int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l1;//empty list with length 0
    list<int> l2(5);//empty list of size 5
    list<int> l3;//empty list 

    // using push_back for inserting element
    l1.push_back(4);
    l1.push_back(1);
    l1.push_back(5);
    l1.push_back(2);
    l1.push_back(6);
    l1.push_back(3);

    display(l1);
    
    list<int> :: iterator itera = l3.begin();
    l3.push_back(11);
    itera++;
    l3.push_back(49);
    itera++;
    l3.push_back(57);
    itera++;
    l3.push_back(7);
    itera++;
    l3.push_back(92);

    //using sort
    cout<<"After implementing sort list becomes: "<<endl;
    l1.sort();
    display(l1);

    //merging list1 and list2
    cout<<"merging list1 and list2, list 1 becomes"<<endl;
    l1.merge(l3);
    display(l1);

    //reversing a list
    cout<<"reversing list 3"<<endl;
    l3.reverse();
    displayl3(l3);


    // using pop_back and pop_front
    cout<<"After implementing pop_back list becomes: "<<endl;
    l1.pop_back();
    display(l1); 
    cout<<"After implementing pop_front list becomes: "<<endl;
    l1.pop_front();
    display(l1); 


    // using remove
    cout<<"After implementing remove list becomes: "<<endl;
    l1.remove(2);
    // removes all ocurrences of an element
    display(l1); 

    // use of insert
    cout<<"After inserting element 100 at position 1 the list becomes: "<<endl;
    // making an iterator
    list<int> :: iterator iter = l1.begin();
    l1.insert(iter ,100);
    display(l1);
    
    
    // use of insert at certain position
    // cout<<"After inserting element 100 at position 1 the list becomes: "<<endl;
    // making an iterator
    // list<int> :: iterator iter = l1.begin();
    // l1._M_insert(iter ,2,100);
    // display(l1);

    return 0;
}