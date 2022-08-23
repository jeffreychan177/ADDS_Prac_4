#include "Reverse.h"
#include <string>
#include <cmath>
Reverse::Reverse()
{
    num = 0;
    sum = 0;
    reverse_string = "";
};
int Reverse::reverseDigit(int value)
{
    int length = log10(value) + 1;
    if (length >= 1)
    {
        sum = sum * 10 + value % 10;
        reverseDigit(value / 10);
    }
    return sum;
};

std::string Reverse::reverseString(std::string letters){
    reverse_string = "";
    return reverseS(letters);
};

std::string Reverse::reverseS(std::string letters){
   int len = letters.length();
    if (len>=1)
    {
    reverse_string += letters[len-1];
    reverseS(letters.erase(len-1,1));
    }
    return reverse_string;
};
Reverse::~Reverse(){};
