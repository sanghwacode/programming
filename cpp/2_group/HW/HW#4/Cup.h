#include <iostream>
using namespace std;
#include "Material.h"

class Cup : public Material {
public:
    Cup() {
        name = "Cup";
        amount = 3;
    }
};
