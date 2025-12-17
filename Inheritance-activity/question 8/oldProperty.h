#include <iostream>
#include <ostream>
#include "property.h"
#pragma once
using namespace std;

class OldProperty : public Property{
private:
    float discount{10};
public:
    void setPrice(const float) override; //sobrescrevendo metodo setprice
    float getDiscount() const {return this->discount;};
    void setDiscount (const float disc) {this->discount = ((disc < 0) ? 10 :  disc);};
    OldProperty(string, float, float);
};