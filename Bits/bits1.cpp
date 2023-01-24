#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout<< ((num>>i) & 1);
    }
    cout<<endl;
}

int main(){
    // 10100100110
    // |         |
   // MSB       LSB
//    most significant and least significant


    // how to check ith bit is set or not
    cout<<endl;
    int a = 5;
    cout<<"Binary form of number = "<<a<<" = ";
    printBinary(a);
    int ithbit = 1;
    cout<<endl;
    cout<<"check whether ith bit is set or not: i = "<<ithbit<<endl;
    if((a & (1<<ithbit)) != 0)
        cout<<"Bit is set"<<endl;
    else    
        cout<<"Bit is not set"<<endl;


    // if I want to set ith bit 
    cout<<"Set ith bit set i = "<<ithbit<<endl;
    printBinary((a | (1<<ithbit)));


    // how to unset ith bit
    ithbit = 2;
    cout<<"unset ith bit unset i = "<<ithbit<<endl;
    printBinary((a & (~(1<<ithbit))));

    // toggle bit
    cout<<"Toggle bit at ith position i = "<<ithbit<<endl;
    cout<<"Original number = ";
    printBinary(a);
    printBinary((a ^ 1<<ithbit));

    // number of set bits
    cout<<"Total number of set bits in ";
    printBinary(a);
    cout<<" = ";
    int cnt = 0;
    for (int i = 31; i >= 0; i--)
    {
        if(((a & (1<<i)) != 0))
            cnt++;
    }
    cout<<cnt<<endl;
    

    cout<<endl;
    return 0;
}