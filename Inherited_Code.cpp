#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;
class BadLengthException : exception {
public:
    BadLengthException( int length ) : message_(to_string(length)) {}
    const char* what() const noexcept override { return message_.c_str(); }
private:
    string message_;
};