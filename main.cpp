#include <string>
#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"

int main()
{
    Reverse rev;
    std::cout << rev.reverseDigit(10) << std::endl;
    std::cout << rev.reverseDigit(45678) << std::endl;
    std::cout << rev.reverseString("abcdef") << std::endl;
    std::cout << rev.reverseString("asfafs") << std::endl;

    Truckloads truck(3);
    std::cout << truck.numTrucks(14) << std::endl;

    Truckloads trucka;
    trucka.setLoadSize(1);
    std::cout << trucka.numTrucks(15) << std::endl;

    Truckloads truckb(5);
    std::cout << truckb.numTrucks(1024) << std::endl;

    return 0;
}
