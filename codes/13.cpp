#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <iomanip>
using namespace std;
 
void print(const vector <int>& v)
{
    vector <int>::const_iterator i;
    for(i = v.begin(); i != v.end(); i++)
    {
        cout << setw(2) << *i << " ";
    }
    cout << endl;
}
 
int main()
{
    vector <int> a(10), b(10);
    bool result;
 
    for (int i = 0; i < 10 ;i++)
    {
        a[i] = i + 1;
        b[i] = i + 2;
    }
    cout << "a : ";
    print(a);
    cout << "b : ";
    print(b);
    // Comparing a and b lexicographically
    cout << "Comparing using negater with less predicate"
         << endl;
    result = lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(), not2(less<int>()));
    if(result == true)
    {
        cout << "a is lexicographically smaller than b."
             << endl;        
    }
    else
    {
        cout << "a is lexicographically greater than or equal to b."
             << endl;
    }
}