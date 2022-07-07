#include "Rectangle.h"
#include <iostream>
#include <cmath>
#include <cstdio>


int main() {

    int m_width, m_height;

    Rectangle* m_rectangle = new Rectangle(m_width, m_height);

    printf("1-------------------------------");
        m_rectangle->set_height(100);   
    printf("1-------------------------------");
        m_rectangle->set_width( 200);
    printf("1-------------------------------"); 

    printf("1-------------------------------");
        cout<<m_rectangle->get_width();
    printf("1-------------------------------");
        cout<<m_rectangle->get_height();
    printf("1-------------------------------");
        cout<<m_rectangle->area();
    printf("1-------------------------------");
        cout<<m_rectangle->perimeter();
    printf("1-------------------------------");
        cout<<m_rectangle->is_square();

/*
    Rectangle rec;
    cout<<rec.set_height();
    cout<<rec.set_width();
    cout<<rec.area()<<" ";
    cout<<rec.perimeter()<<" ";
*/


    
    
}