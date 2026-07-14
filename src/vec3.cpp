#include "vec3.h"

vec3::vec3(double e1, double e2, double e3)
    : e1{e1}, e2{e2}, e3{e3}
{}

vec3 vec3::operator+(vec3 const& v)
{
    vec3 sum{x() + v.x(), y() + v.y(), z() + v.z()};
    return sum;
}

vec3 vec3::operator-(vec3 const& v)
{
    vec3 diff{x() - v.x(), y() - v.y(), z() - v.z()};
    return diff;
}
bool vec3::operator==(vec3 const& v) const
{
    return ((x() == v.x()) && (y() == v.y()) && (z() == v.z()));
}

double vec3::x()const
{
    return e1;
}

double vec3::y()const
{
    return e2;
}

double vec3::z()const
{
    return e3;
}
