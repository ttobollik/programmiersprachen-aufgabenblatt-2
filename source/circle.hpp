
#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"

class Circle {
  private:
    const float radius_;
    const Vec2 center_;

  
  public:
    Circle();
    Circle(float radius, float x, float y);
    Circle(float radius);
    float get_radius() const;
    Vec2 get_center() const;

};



#endif