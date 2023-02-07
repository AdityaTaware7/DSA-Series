#include <iostream>
using namespace std;

void printAsc(int n)
{
    if(n == 0)
        return;
    
    printAsc(n-1);
    cout<<n<<" ";
}

void printDesc(int n)
{
    if(n == 0)
        return;

    cout<<n<<" ";
    n--;
    printDesc(n);
}

int main(){
    int n = 5;
    printAsc(n);
    // printDesc(n);
    return 0;
}