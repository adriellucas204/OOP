#include <iostream>
#include <ostream>
#include "property.h"
#pragma once
using namespace std;

class NewProperty : public Property{
private:
    float additional{10};
public:
    void setPrice(const float) override; //sobrescrevendo metodo setprice
    int getAdditional() const {return this->additional;};
    void setAdditional (const float add) {this->additional = ((add < 0) ? 10 :  add);};
    NewProperty(string, float, float);
};