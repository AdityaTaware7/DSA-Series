#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> a;

    a[1] = 100;
    a[2] = 29;
    a[70] = 32;
    a[15] = 17;
    // we can also find/ delete key in map using a.find(key) and a.erase(key)

    map<char, int> count;
    string s = "aditya taware";

    for(char x:s)
    {
        count[x]++;
    }

    cout<<"a ocurred "<<count['a']<<" times in the string ";
    cout<<endl;

    // Pairs
    pair<int, int> p;
    p.first = 10;
    p.second = 20;
    cout<<"first element in pair is"<<p.first;
    cout<<"second element in pair is "<<p.second;
    // max element in integer
    cout<<__INT_MAX__;

    return 0;
}