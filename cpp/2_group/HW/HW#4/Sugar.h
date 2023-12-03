#include <iostream>
using namespace std;
#include "Material.h"

class Sugar : public Material {
public:
    Sugar() {
        name = "Sugar";
        amount = 3;
    }
};
