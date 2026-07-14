#ifndef VEC3_H
#define VEC3_H

#include <cmath>

class vec3
{
    public:
        vec3(double e1, double e2, double e3); //en vektor som innehåller 3 flyttal kan vara direction (xyz) position (xyz) eller färg(rgb)

        double x()const;
        double y()const;
        double z()const;

        vec3 operator+(vec3 const& v);
        vec3 operator-(vec3 const& v);
        bool operator==(vec3 const& v) const;

    private:
        double e1;
        double e2;
        double e3;
};

#endif
