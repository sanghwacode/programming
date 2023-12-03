#include <iostream>
using namespace std;
#include "Material.h"

class Cream : public Material {
public:
    Cream() {
        name = "Cream";
        amount = 3;
    }
};
