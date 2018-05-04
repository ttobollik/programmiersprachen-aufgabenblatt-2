#define Catch_CONFIG_RUNNER
#include "circle.hpp"
#include <iostream>
#include <math.h>


    Circle::Circle() : radius_{1.0f}, center_{0.0,0.0}{}

    Circle::Circle(float radius, float x, float y): radius_{radius}, center_{x,y} {}

    Circle::Circle(float radius) : radius_{radius}, center_{0.0,0.0} {}

    float Circle::get_radius() const{
        return radius_;
    }

    Vec2 Circle::get_center() const{
        return center_;
    }

    float Circle::circumference() {
        circumference_ = (2*M_PI*radius_);
        return circumference_;
    }