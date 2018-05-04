#define Catch_CONFIG_RUNNER
#include "circle.hpp"
#include <iostream>
#include <math.h>


    Circle::Circle() : radius_{1.0f}, center_{0.0,0.0}, color_{0.0, 0.0, 0.0}{}

    Circle::Circle(float radius, float x, float y): radius_{radius}, center_{x,y}, color_{0.0, 0.0, 0.0} {}

    Circle::Circle(float radius) : radius_{radius}, center_{0.0,0.0},color_{0.0, 0.0, 0.0} {}

    Circle::Circle(float radius, Color color) : radius_{radius}, center_{0.0,0.0}, color_{color} {}

    Circle::Circle(Color color) : radius_{1.0f}, center_{0.0,0.0}, color_{color} {}

    float Circle::get_radius() const{
        return radius_;
    }

    Vec2 Circle::get_center() const{
        return center_;
    }

    Color Circle::get_color() const{
        return color_;
    }

    float Circle::circumference() {
        circumference_ = (2*M_PI*radius_);
        return circumference_;
    }