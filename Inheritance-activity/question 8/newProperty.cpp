#include "newProperty.h"
#include "property.h"
using namespace std;

NewProperty::NewProperty(string address, float price, float add) : Property(address, price){
    setAdditional(additional);
}

void NewProperty::setPrice(float price){
    Property::setPrice(price * (1 + (this->additional/100)));
}