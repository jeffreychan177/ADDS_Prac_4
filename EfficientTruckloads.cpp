#include "EfficientTruckloads.h"
#include <iostream>
#include <map>
EfficientTruckloads::EfficientTruckloads(int LoadSize)
{
    loadSize = LoadSize;
};

EfficientTruckloads::EfficientTruckloads()
{
    numCrates = 0;
    num = 0;
    loadSize = 0;
};

int EfficientTruckloads::numTrucks(int numCrates)
{

    num = 1;
    if (calculated.count(numCrates) > 0)
    {
        return calculated.at(numCrates);
    }
    else
    {
        int div = divide(numCrates);
        calculated.insert(std::pair<int, int>(numCrates, div));
        return div;
    }
};

int EfficientTruckloads::divide(int numCrates)
{
    if (numCrates > loadSize)
    {
        num++;
        if (numCrates % 2 == 0)
        {
            divide(numCrates / 2);
            divide(numCrates / 2);
        }
        else
        {
            divide(numCrates / 2);
            divide(((numCrates / 2) + 1));
        }
    }
    return num;
};

void EfficientTruckloads::setLoadSize(int LoadSize)
{
    loadSize = LoadSize;
};