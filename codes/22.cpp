#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
 
template<class T>
struct greater_equal : public std::binary_function<T, T, bool> {
    bool operator() (const T& a, const T& b) const
    {
        return (a >= b);
    }
};
 
void print(const std::vector <int>& v)
{
    std::vector <int>::const_iterator i;
    for(i = v.begin(); i != v.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
 
int main()
{
    std::vector <int> a(10), b(10);
    greater_equal<int> x;
    bool result;
 
    for (int i = 0; i < 10 ;i++)
    {
        a[i] = i + 1;
        b[i] = i + 1;
    }
    std::cout << "a : ";
    print(a);
    std::cout << "b : ";
    print(b);
    // Comparing a and b lexicographically
    result = std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(), x);
    if(result == true)
    {
        std::cout << "a is lexicographically greater than or equal to b."
                  << std::endl;
    }
    else
    {
        std::cout << "a is lexicographically smaller than or equal to b."
                  << std::endl;
    }
}