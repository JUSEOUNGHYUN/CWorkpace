#include "Rectangle.h"
#include <iostream>
#include <cmath>


using namespace std;

Rectangle::Rectangle(int width, int height){
    int width = 0;
    int height = 0;
}

int Rectangle::get_width() const{
    return width;
}

int Rectangle::get_height() const{
    return height;
}

void Rectangle::set_width(int width) { // 직사각형의 가로 길이를 width로 변경
    this -> width = width;
} 

void Rectangle::set_height(int height){ // 직사각형 새로 길이 height로 변경
    this -> height = height;
} 

int Rectangle::area() const{
    if(width<1 | height<1){
        return -1;
    }
    return width*height;
}

int Rectangle::perimeter() const{
    return (width*2) + (height*2);
}

bool Rectangle::is_square() const{
    if(width == height){
        return true;
    }
    else{
        return false;
    }
}
