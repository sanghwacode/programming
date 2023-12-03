#include <iostream>
using namespace std;
#include "Material.h"

class Coffee : public Material {
public:
    Coffee() {
        name = "Coffee";
        amount = 3;
    }
};
