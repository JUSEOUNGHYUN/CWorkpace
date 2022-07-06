#include "air.h"
#include <iostream>

using namespace std;

int main(void) {

    air School_Air;

    School_Air.initAir();

    School_Air.OnOff();
    School_Air.SetDegree(20);
    School_Air.OutDegree();
    School_Air.UpDegree();
    School_Air.DownDegree();
    School_Air.OnOff();

    return 0;
}