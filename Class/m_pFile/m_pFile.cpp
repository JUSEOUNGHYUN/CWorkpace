#include "Declar.h"
#include <iostream>

using namespace std;

int main() {

    CNMEAReader* str_file = new CNMEAReader("output.nmea");

    int32_t cnt = 0; 
    string* readData = nullptr;
    while( (readData = str_file->GetNextData()) != nullptr ) {
        //printf readData

        printf("[%d] [%s]\n", cnt++, readData->c_str());
    }

    delete str_file;

    // 
}