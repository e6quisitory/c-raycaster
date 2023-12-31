#include "Vec2.h"

/*
=========================================================
    Vec2
=========================================================
*/

Vec2 Vec2_New(double x, double y) {
    Vec2 v;
         v.x = x;
         v.y = y;
    return v;
}

Vec2 Vec2_Add(Vec2 v1, Vec2 v2) {
    Vec2 result;
         result.x = v1.x + v2.x;
         result.y = v1.y + v2.y;
    return result;
}

Vec2 Vec2_Subtract(Vec2 v1, Vec2 v2) {
    Vec2 result;
         result.x = v1.x - v2.x;
         result.y = v1.y - v2.y;
    return result;
}

Vec2 Vec2_Scale(Vec2 v, double scaleFactor) {
    Vec2 result;
         result.x = scaleFactor*v.x;
         result.y = scaleFactor*v.y;
    return result;
}

Vec2 Vec2_Negative(Vec2 v) {
    Vec2 neg;
         neg.x = -v.x;
         neg.y = -v.y;
    return neg;
}

double Vec2_Dot(Vec2 v1, Vec2 v2) {
    return v1.x*v2.x + v1.y*v2.y;
}

void Vec2_Print(Vec2 v) {
    printf("[%.3lf, %.3lf]\n", v.x, v.y);
}

double Vec2_Length(Vec2 v) {
    return sqrt(pow(v.x, 2.0) + pow(v.y, 2.0));
}

Vec2 Vec2_Rotate(Vec2 v, double rad) {
    Vec2 rotated;
    rotated.x = v.x*cos(rad) - v.y*sin(rad);
    rotated.y = v.x*sin(rad) + v.y*cos(rad);
    return rotated;
}

Vec2 UnitVector(Vec2 v) {
    return Vec2_Scale(v, 1.0/Vec2_Length(v));
}

/*
=========================================================
    iVec2
=========================================================
*/

iVec2 iVec2_New(int x, int y) {
    iVec2 v;
         v.x = x;
         v.y = y;
    return v;
}

iVec2 iVec2_Add(iVec2 v1, iVec2 v2) {
    iVec2 result;
         result.x = v1.x + v2.x;
         result.y = v1.y + v2.y;
    return result;
}

iVec2 iVec2_Subtract(iVec2 v1, iVec2 v2) {
    iVec2 result;
         result.x = v1.x - v2.x;
         result.y = v1.y - v2.y;
    return result;
}

iVec2 iVec2_Negative(iVec2 v) {
    iVec2 neg;
          neg.x = -v.x;
          neg.y = -v.y;
    return neg;
}

void iVec2_Print(iVec2 v) {
    printf("[%d, %d]\n", v.x, v.y);
}

/*
=========================================================
    Conversions
=========================================================
*/

iVec2 Vec2_to_iVec2(Vec2 v) {
    iVec2 conv;
    conv.x = (int)v.x;
    conv.y = (int)v.y;
    return conv;
}

Vec2 iVec2_to_Vec2(iVec2 v) {
    Vec2 conv;
    conv.x = (double)v.x;
    conv.y = (double)v.y;
    return conv;
}
