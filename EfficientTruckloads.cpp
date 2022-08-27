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

int EfficientTruckloads::numTrucks(int numCrates, int LoadSize)
{
     if (0 < numCrates && numCrates <= 10000 && 0 < LoadSize && LoadSize <= 10000)
    {
        loadSize = LoadSize;
        num = 1;
        return divide(numCrates);
    }
    else
    {
        return 0;
    }
};

int EfficientTruckloads::divide(int numCrates)
{
    if (calculated.count(numCrates) > 0)
    {
        return calculated.at(numCrates);
    }
    else
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
        calculated.insert(std::pair<int, int>(this->numCrates, num));
        return num;
    }
};

void EfficientTruckloads::setLoadSize(int LoadSize)
{
    loadSize = LoadSize;
};