#include <iostream>
using namespace std;
#include "Material.h"

class Water : public Material {
public:
    Water() {
        name = "Water";
        amount = 3;
    }
};
