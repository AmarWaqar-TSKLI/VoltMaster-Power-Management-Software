#include <iostream>
using namespace std;
class PowerConsumption
{
public:
    double TargetUnits;
    double ConsumedUnits;
    double UnitPrice;
    double estimatedBill;

    void cmpTargetAndActual();
    void updateCurrentUsage();
    void calculateBill();
};