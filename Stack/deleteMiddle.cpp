#include <iostream>
# include <stack>
using namespace std;

void deleteMiddle(stack<int>&inputStack, int N, int count){
	
   // Write your code here
    int middle = inputStack.size()/2;
    if (count == middle)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    deleteMiddle(inputStack, N, count+1);
    inputStack.push(num);
   
}

void display(stack<int>&inputStack)
{
    while (!inputStack.empty())
    {
        cout<<inputStack.top()<<endl;
        inputStack.pop();   
    }
}

int main(){
    int n = 4;
    int count = 0;
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(6);

    // display(s);
    deleteMiddle(s, n, count);

    display(s);
    return 0;
}