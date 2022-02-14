#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> q;

    // Adding elements into the queue
    q.push("Aditya");
    q.push("Sanjay");
    q.push("Taware");


    cout<<"top element before pop is "<<q.front();
    cout<<endl;

    //Removing elements from queue
    q.pop();


    // Viewing top element of queue
    cout<<"top element after pop is "<<q.front();
    cout<<endl;

    // size of queue
    cout<<"size of stack is "<<q.size();
    cout<<endl;
    
    
    // empty or not
    cout<<"empty or not "<<q.empty();
    cout<<endl;


    return 0;
}