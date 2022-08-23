#include <string>
#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;
int main()
{
    int i;
    std::string s;
    int numCrates;
    int loadSize;

    cin >> i;
    cin >> s;
    cin >> numCrates;
    cin >> loadSize;

    Reverse rev;
    Truckloads truck(loadSize);
    EfficientTruckloads Truck(loadSize);

    if (i < 0)
    {
        std::cout << "ERROR";
    }
    else
    {
        std::cout << rev.reverseDigit(i);
    }

    std::cout << " " << rev.reverseString(s) << " ";

        if(numCrates > 0 && loadSize > 0)
    {
        std::cout << truck.numTrucks(numCrates) << " " << Truck.numTrucks(numCrates) << std::endl;
    }else{
        std::cout << "ERROR" << " " << "ERROR" << std::endl;
    }

    return 0;
}
