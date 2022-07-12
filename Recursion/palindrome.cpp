#include <iostream>
using namespace std;

bool palindrome(string s, int l, int r)
{
    // Base condition
    if (l >= r)
        return true;

    if (s[l] != s[r])
        return false;

    // Recursive call
    return palindrome(s, l + 1, r - 1);
}

int main()
{
    string s = "rotator";

    int a = palindrome(s, 0, s.size() - 1);
    if (a == 1)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}