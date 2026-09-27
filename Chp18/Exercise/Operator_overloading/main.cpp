#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
bool isEqualTo(const T&value1,const T&value2)
{
    return value1 == value2;
}

template <typename T>
class Compare
{
    private:
        T value;
    public:
        Compare( T val ) : value(val) {};
        bool operator==( const T&other ) const
        {
            return isEqualTo( this->value, other);
        }
};

template <typename T>
class Compare2
{
    private:
        T value;
    public:
        Compare2( T val ) : value(val) {};
        bool operator==( const T&other ) const
        {
            return ( this->value == other);
        }
};

int main() {
    std::cout << std::boolalpha;

    // ==========================================
    // 1. Integer Tests (int)
    // ==========================================
    int intRaw1 = 42;
    int intRaw2 = 42;
    Compare<int> intObj1(intRaw1);
    Compare2<int> intObj2(intRaw1);

    std::cout << "--- Integer Tests ---\n";
    std::cout << "isEqualTo: " << isEqualTo(intRaw1, intRaw2) << "\n";
    std::cout << "Compare  : " << (intObj1 == intRaw2) << "\n";
    std::cout << "Compare2 : " << (intObj2 == intRaw2) << "\n\n";

    // ==========================================
    // 2. Floating-Point Tests (double)
    // ==========================================
    double doubleRaw1 = 3.14159;
    double doubleRaw2 = 3.14159;
    Compare<double> doubleObj1(doubleRaw1);
    Compare2<double> doubleObj2(doubleRaw1);

    std::cout << "--- Double Tests ---\n";
    std::cout << "isEqualTo: " << isEqualTo(doubleRaw1, doubleRaw2) << "\n";
    std::cout << "Compare  : " << (doubleObj1 == doubleRaw2) << "\n";
    std::cout << "Compare2 : " << (doubleObj2 == doubleRaw2) << "\n\n";

    // ==========================================
    // 3. Character Tests (char)
    // ==========================================
    char charRaw1 = 'A';
    char charRaw2 = 'Z'; // Different value to test false condition
    Compare<char> charObj1(charRaw1);
    Compare2<char> charObj2(charRaw1);

    std::cout << "--- Character Tests (Expecting False) ---\n";
    std::cout << "isEqualTo: " << isEqualTo(charRaw1, charRaw2) << "\n";
    std::cout << "Compare  : " << (charObj1 == charRaw2) << "\n";
    std::cout << "Compare2 : " << (charObj2 == charRaw2) << "\n\n";

    // ==========================================
    // 4. String Tests (std::string)
    // ==========================================
    std::string strRaw1 = "Hello";
    std::string strRaw2 = "Hello";
    Compare<std::string> strObj1(strRaw1);
    Compare2<std::string> strObj2(strRaw1);

    std::cout << "--- String Tests ---\n";
    std::cout << "isEqualTo: " << isEqualTo(strRaw1, strRaw2) << "\n";
    std::cout << "Compare  : " << (strObj1 == strRaw2) << "\n";
    std::cout << "Compare2 : " << (strObj2 == strRaw2) << "\n\n";

    // ==========================================
    // 5. Vector Tests (std::vector)
    // ==========================================
    std::vector<int> vecRaw1 = {1, 2, 3};
    std::vector<int> vecRaw2 = {1, 2, 3};
    Compare<std::vector<int>> vecObj1(vecRaw1);
    Compare2<std::vector<int>> vecObj2(vecRaw1);

    std::cout << "--- Vector Tests ---\n";
    std::cout << "isEqualTo: " << isEqualTo(vecRaw1, vecRaw2) << "\n";
    std::cout << "Compare  : " << (vecObj1 == vecRaw2) << "\n";
    std::cout << "Compare2 : " << (vecObj2 == vecRaw2) << "\n";
}
