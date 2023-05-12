#include <iostream>
 
class Base {
    private:
        int i;
    protected:
        int j;
    public:
        int k;
        Base(int ii = 0, int jj = 1, int kk = 2) : i(ii), j(jj), k(kk) { }
        void printData() {
            std::cout << "i (Private) = " << i << std::endl
                      << "j (Protected) = " << j << std::endl
                      << "k (Public) = " << k << std::endl;
        }
};
 
class Derived : public Base {
    public:
        void changeData(void)
        {
            //Can access public and protected members in derived class
            j++;
            k++;
            // But i++ show error
        }
};
 
int main()
{
    Derived d;
 
    std::cout << "Before changing " << std::endl;
    d.printData();
    d.changeData();
    std::cout << "After changing " << std::endl;
    d.printData();
}