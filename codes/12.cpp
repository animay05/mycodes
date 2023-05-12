#include <iostream>
#include <functional>
#include <algorithm>
 
struct Compare : public std::binary_function<int, int, bool> {
    bool operator() (int a, int b)
    {
        return (a == b);
    }
};
 
int main()
{
    Compare compare;
    Compare::first_argument_type a;
    Compare::first_argument_type b;
    Compare::result_type r;
 
    std::cout << "Enter a = ";
    std::cin  >> a;
    std::cout << "Enter b = ";
    std::cin  >> b;
    r = compare(a, b);
    std::cout << "Numbers " << a << " and " << b;
    if(r == true)
        std::cout << " are equal.\n";
    else
        std::cout << " are unequal.\n";
}