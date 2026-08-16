#include <iostream>
using namespace std;

class Test
{
    public: 
        explicit Test(int = 0);
        void print() const;
    private:
        int x;
};

Test::Test(int value) : x(value)
{
}

void Test::print() const
{
    cout << "            x = " << x << endl;

    cout << "      this->x = " << this->x << endl;

    cout << "    (*this).x = " << (*this).x << endl;
}

int main() {
    Test testObj(12);
    
    testObj.print();
}