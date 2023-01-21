#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cin >> n;
    n = 6;
    int a[n] = {4, 5, 5, 25, 7, 8};
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> a[i];
    // }

    sort(a, a + n);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Lowerbound Function if element is present returns its pointer else returns next pointer of next greater element
    int *ptr1 = lower_bound(a, a + n, 26);
    if (ptr1 == a + n)
        cout << "Lowerbound Not found";
    else
        cout << "Lowerbound of 6 = " << (*ptr1) << endl;
    cout << endl;

    int *ptr2 = upper_bound(a, a + n, 5);
    if (ptr2 == a + n)
        cout << "Upperbound Not found";
    else
        cout << "Upperbound of 5 = " << (*ptr2) << endl;
    cout << endl;

    vector<int> v;
    v = {2, 3, 1, 6, 7, 6};
    int min = *min_element(v.begin() + 3, v.end());
    cout << "min ele = " << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << "Max ele = " << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "total sum " << sum << endl;
    int ct = count(v.begin(), v.end(), 2);
    cout << "count of 2 = " << ct << endl;



    // Number theory
    cout << INT_MAX << endl;
    // LL is for long long
    int a = (1LL << 31) - 1;

    cout << a << endl;

    unsigned int b = (1LL << 32) - 1;
    cout << b << endl;
}