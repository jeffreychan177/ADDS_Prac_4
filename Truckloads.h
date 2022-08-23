#ifndef _TRUCKLOADS_H
#define _TRUCKLOADS_H
class Truckloads {
    public:
    Truckloads();
    Truckloads(int LoadSize);
    int numTrucks(int numCrates);
    int divide(int numCrates);
    void setLoadSize(int LoadSize);
    int loadSize;
    private:
    int numCrates;
    int num;
};

#endif