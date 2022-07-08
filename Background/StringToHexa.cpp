#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    string Finish_num;  //문자열
    cin>>Finish_num;

    int nmea_checksum = strtol(Finish_num.c_str(), NULL, 16);

    cout<<nmea_checksum;
}

// 63 -> 99 
// 7D -> 125
// string 16진수 -> int 10진수