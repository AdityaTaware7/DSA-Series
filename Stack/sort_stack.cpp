#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    stack<int> st;
    st.push(6);
    st.push(14);
    st.push(21);
    st.push(4);
    st.push(7);

    int s = st.size();

    int arr[s];
    for (int i = 0; i < s; i++)
    {
        arr[i] = st.top();
        st.pop();
    }
    cout<<"Before sorting"<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr, arr + s,greater<int>());

    for (int i = 0; i < s; i++)
    {
        st.push(arr[i]);
    }

    // display stack
    cout<<"After sorting stack becomes"<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<st.top()<<" ";
        st.pop();

    }
    
    
    return 0;
}