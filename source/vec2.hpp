#ifndef VEC2_HPP
#define VEC2_HPP
// Vec2 class definition
struct Vec2 { 
  // TODO Constructors 
  float x_;
  float y_;

//Aufgabe 2.3
  Vec2();
  ~Vec2();
  Vec2(float vec_x, float vec_y);
  Vec2& operator+=(Vec2 const& v);
  Vec2& operator-=(Vec2 const& v);
  Vec2& operator*=(float s);
  Vec2& operator/=(float s);

};
//Aufgabe 2.4
  Vec2 operator+(Vec2 const& u, Vec2 const& v); 
  Vec2 operator-(Vec2 const& u, Vec2 const& v);
  Vec2 operator*(Vec2 const& v, float s);
  Vec2 operator/(Vec2 const& v, float s);
  Vec2 operator*(float s, Vec2 const& v);

#endif // VEC2_HPP