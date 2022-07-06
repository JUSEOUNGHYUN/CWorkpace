#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Point {

    private:
        int a;
        int b;
    public:
        Point(int a, int b);
        ~Point();
        void print();
};