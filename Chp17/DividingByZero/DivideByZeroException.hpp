#include <stdexcept>

class DivideByZeroException : public std::runtime_error
{
    public:
        DivideByZeroException() : std::runtime_error( "attempted division by 0") {};
};
