
#ifndef COLOR_HPP
#define COLOR_HPP
#include <iostream>     
#include <algorithm>
using namespace std;

struct Color {
  float r;
  float g;
  float b;


  Color(float x) :
    r{x}, g{x}, b{x} {
        x = max(x,1.0f) || min(x,0.0f);
    }

  Color(float r1, float g1, float b1) :
    r{r1}, g{g1}, b{b1} {
        //r = max(r,1.0f) || min(r,0.0f);
        //g = max(g,1.0f) || min(g,0.0f);
       // b = max(b,1.0f) || min(b,0.0f);
    }
};

#endif