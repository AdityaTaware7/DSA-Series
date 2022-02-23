#include <iostream>
#include <stack>
using namespace std;

int main(){
    string a = "Aditya";
    stack<char> s;
    for (int i = 0; i < 6; i++)
    {
        s.push(a[i]);
    }
    
    string answer = "";
    while (!s.empty())
    {
        answer.push_back(s.top());
        s.pop();
    }
    cout<<answer;

    return 0;
}