#define Catch_CONFIG_RUNNER
#include "rectangle.hpp"
#include <iostream>
#include <algorithm>
#include "vec2.hpp"
using namespace std;

Rectangle::Rectangle() : min_{0,0}, max_{1,1} {}

Rectangle::Rectangle(Vec2 v1, Vec2 v2) :
    min_{min(v1.x_,v2.x_),min(v1.y_,v2.y_)},
    max_{max(v1.x_,v2.x_),max(v1.y_,v2.y_)} {}

Vec2 Rectangle::get_min() {
    return min_;
}

Vec2 Rectangle::get_max() {
    return max_;
}