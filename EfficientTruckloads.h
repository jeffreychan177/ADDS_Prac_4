#ifndef _EFFICIENT_TRUCKLOADS_H
#define _EFFICIENT_TRUCKLOADS_H
#include <map>  
class EfficientTruckloads {
    public:
    EfficientTruckloads();
    EfficientTruckloads(int LoadSize);
    int numTrucks(int numCrates);
    int divide(int numCrates);
    void setLoadSize(int LoadSize);
    int loadSize;
    private:
    int numCrates;
    int num;
    std::map<int, int> calculated;
};

#endif