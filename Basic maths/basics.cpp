#include <iostream>
using namespace std;

// Imp relation
// a x b = LCM(a, b) * GCD (a, b)

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else if(b == 0)
        return a;
    else
    {
        while (a != b)
        {
            if(a > b)
                a = a - b;
            else
                b = b - a;
        }
        
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    int a = 25;
    int b = 10;
    cout<<"GCD: "<<gcd(a , b)<<endl;
    cout<<"LCM: "<<lcm(a , b)<<endl;
    cout<<"GCD * LCM: "<<  gcd(a , b) * lcm(a , b)<< " = "<< "a * b"<<endl;
    return 0;
}