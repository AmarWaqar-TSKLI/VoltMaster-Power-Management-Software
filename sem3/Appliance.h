#include <iostream>
using namespace std;

class Appliance {
public:
    string name;
    int id;
    double powerUsage;
    int priority;
    int quantity;

    int getPriority();
    int getQuantity();
    double getPowerUsage();
    int getId();
    string getName();
    void setPriority();
    void setQuantity();
    void updatePowerUsage();
};