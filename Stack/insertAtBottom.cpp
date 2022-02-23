#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    int size = st.size();
    int arr[size];
    int x = 5;
    st.push(1);
    st.push(9);
    st.push(6);
    st.push(32);
    

    for (int i = 0; i < size; i++)
    {
        arr[i] = st.top();
        st.pop();
    }
    
    st.push(x);

    for (int i = 0; i < size; i++)
    {
        st.push(arr[i]);
    }
    
    // display
    while (!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
    

    return 0;
}