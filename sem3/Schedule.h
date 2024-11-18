#include <iostream>
#include <vector>
using namespace std;

class Schedule {
public:
    string type;
    int id;
    vector<string> listOfAppliances;
    double unitsSaved;

    void generateSchedule();
    void update();
    void getHistory();
    void estimateSavings();
    void getFeedback();
};