#define Catch_CONFIG_RUNNER
#include "rectangle.hpp"
#include <iostream>
#include <algorithm>
#include "vec2.hpp"
using namespace std;

Rectangle::Rectangle() : min_{0,0}, max_{1,1}, color_{0.0, 0.0, 0.0} {}

Rectangle::Rectangle(Vec2 v1, Vec2 v2) :
    min_{min(v1.x_,v2.x_),min(v1.y_,v2.y_)},
    max_{max(v1.x_,v2.x_),max(v1.y_,v2.y_)},
    color_{0.0, 0.0, 0.0} {}

Rectangle::Rectangle(Color color) : min_{0,0}, max_{1,1}, color_{color} {}

Vec2 Rectangle::get_min() {
    return min_;
}

Vec2 Rectangle::get_max() {
    return max_;
}

Color Rectangle::get_color() const{
    return color_;
}

double Rectangle::get_length(){
    double length;
    length = (max_.x_ - min_.x_);
    return length;
}

double Rectangle::get_height(){
    double height;
    height = (max_.y_ - min_.y_);
    return height;
}

float Rectangle::circumference() {
    float length = get_length();
    float height = get_height();
    circumference_ = (2*length + 2*height);
    return circumference_;
}