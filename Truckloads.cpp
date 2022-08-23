#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads(int LoadSize)
{
    loadSize = LoadSize;
};

Truckloads::Truckloads()
{
    numCrates = 0;
    num = 0;
    loadSize = 0;
};

int Truckloads::numTrucks(int numCrates)
{
    num = 1;
    return divide(numCrates);
};

int Truckloads::divide(int numCrates)
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

void Truckloads::setLoadSize(int LoadSize)
{
        loadSize = LoadSize;
};