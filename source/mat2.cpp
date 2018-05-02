#include "mat2.hpp"


Mat2::Mat2() : 
  arr{{1,0,0,1}} {}

Mat2::Mat2(double a, double b, double c, double d) :
  arr{{a,b,c,d}} {}


Mat2& Mat2 :: operator*=(Mat2 const& m) {
    Mat2 sum_multiply;
    sum_multiply.arr[0] = ((arr[0] * m.arr[0]) + (arr[1] * m.arr[2]));
    sum_multiply.arr[1] = ((arr[0] * m.arr[1]) + (arr[1] * m.arr[3]));
    sum_multiply.arr[2] = ((arr[2] * m.arr[0]) + (arr[3] * m.arr[2]));
    sum_multiply.arr[3] = ((arr[2] * m.arr[1]) + (arr[3] * m.arr[3]));
    return sum_multiply;
}
/*
Mat2 operator*(Mat2 const& m1, Mat2 const& m2) {
    Mat2 sum_multiply;
    sum_multiply.a[0] = (m1.a[0] * m2.a[0]) + (m1.a[1] * m2.a[2]);
    sum_multiply.a[1] = (m1.a[0] * m2.a[1]) + (m1.a[1] * m2.a[3]);
    sum_multiply.a[2] = (m1.a[2] * m2.a[0]) + (m1.a[3] * m2.a[2]);
    sum_multiply.a[3] = (m1.a[2] * m2.a[1]) + (m1.a[3] * m2.a[3]);
    return sum_multiply;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v) {
    Mat2 vec_mutliply;
    vec_multiply.x_ = (m.a[0]*v.x_)+(m.a[1]*v.y_);
    vec_multiply.y_ = (m.a[2]*v.x_)+(m.a[3]*v.y_);
    return vec_multiply;
}

Vec2 operator*(Vec2 const& v, Mat2 const& m){
    Mat2 vec_mutliply;
    vec_multiply.x_ = (m.a[0]*v.x_)+(m.a[1]*v.y_);
    vec_multiply.y_ = (m.a[2]*v.x_)+(m.a[3]*v.y_);
    return vec_multiply;
}

float Vec2 det() const {
  float det = (a[0]*a[3])-(a[2]*a[1]);
  return det;
}

Mat2 inverse(Mat2 const& m) {
    double det = m.det();
    if (det!=0) {
        m.a[0]= (1/det)*(m.a[3]);
        m.a[1]= (-1/det)*(m.a[1]);
        m.a[2]= (-1/det)*(m.a[2]);
        m.a[1]= (1/det)*(m.a[0]);
        return m;
    } else {
        std :: cout << "This Matrix doesn't have an inverse \n";
    }
}

Mat2 transpose(Mat2 const& m) {
    Mat2 mTrans;
    mTrans.a[0]= (m.a[0]);
    mTrans.a[1]= (m.a[2]);
    mTrans.a[2]= (m.a[1]);
    mTrans.a[1]= (m.a[3]);
    return m;
}*/

// Mat2 make_rotation_mat2(float phi); FEHLT

