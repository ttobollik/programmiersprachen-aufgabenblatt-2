
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"

class Rectangle {
  private:
   Vec2 min_;
   Vec2 max_;

  public:
    Rectangle();
    Rectangle(Vec2 v1, Vec2 v2);
    Vec2 get_min();
    Vec2 get_max();
    double get_length();

 
};

#endif