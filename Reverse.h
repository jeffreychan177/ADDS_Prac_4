#ifndef _REVERSE_H
#define _REVERSE_H
#include <string>
class Reverse
{
    public:
    Reverse();
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
    std::string reverseS(std::string letters);
    ~Reverse();
    private:
    int num;
    int sum;
    std::string reverse_string;
};
#endif