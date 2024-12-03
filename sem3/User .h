#include <iostream>
using namespace std;

class User{
public:
    const char* username;
    const char* password;
    int peakHoursStart;
    int peakHoursEnd;
    const char* meterPhaseType;
    int ID;
    User(const char* username, const char* password);
};