#include <iostream>
#include "Point.h"
#include <string>

using namespace std;

Point::Point(int a, int b){
    this -> a = a;
    this -> b = b;
}

Point::~Point() {
    cout<<"file close"<<" ";
}

void Point::print() {
    cout<<a<<" "<<b;
}