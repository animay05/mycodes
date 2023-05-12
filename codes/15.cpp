#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
class A {
    private:
        const int i, j;
    public:
        A(int ii = 0, int jj = 0) : i(ii), j(jj) {}
        string getResponse() const {
            string s;
            stringstream ss;
            ss << "i = " << i << ", j = " << j << "\n";
            s = ss.str();
            return s;
        }
        void makeSomeChanges() const;	
};
 
void A::makeSomeChanges() const
{
    const int& iref = i;
    const_cast<int&>(iref) = i + 10;
    const int& jref = j;
    const_cast<int&>(jref) = j + 10;
}
 
int main()
{
    A a(10, 20);
 
    cout << "A::A(10, 20)          : " << a.getResponse();
    a.makeSomeChanges();
    cout << "A::makeSomeChanges()  : " << a.getResponse();	
}