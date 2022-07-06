#include "Point.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    int a_c, a_b;

    Point *p = new Point(a_c, a_b);
    scanf("%d %d",&a_c, &a_b);
printf("1-----n");
    p->print();
printf("2-----n");
    delete p;
   printf("3-----n"); 
  //  while(1);
}