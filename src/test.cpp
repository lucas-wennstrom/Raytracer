#include "vec3.h"
#include <iostream>
#include <cassert>

int main()
{
//**TEST VEKTOR**//
    {
        vec3 V1{1.0, 0.0, 1.0};
        vec3 V2{0, 1.0, 0.0};
        vec3 V3{0.0, 0.0, 0.0};
        vec3 V4{1.0, 1.0, 1.0};

        V3 = V1 + V2;
        assert(V3 == V4);

        V3 = V3 - V2;
        assert(V3 == V1);
    }

    std::cout << "ALL CASES PASSED" << std::endl;

}
