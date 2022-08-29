#ifndef _EFFICIENT_TRUCKLOADS_H
#define _EFFICIENT_TRUCKLOADS_H
#include <map>  
#include <string>
class EfficientTruckloads {
    public:
    EfficientTruckloads();
    EfficientTruckloads(int LoadSize);
  int numTrucks(int numCrates,int LoadSize);
    int divide(int numCrates);
    void setLoadSize(int LoadSize);
    int loadSize;
    private:
    int numCrates;
    int num;
    std::map<std::string, int> calculated;
    std::string input;
};

#endif