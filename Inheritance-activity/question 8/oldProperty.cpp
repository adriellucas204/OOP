#include "oldProperty.h"
#include "property.h"
using namespace std;

OldProperty::OldProperty(string address, float price, float disc) : Property(address, price){
    setDiscount(disc);
}

void OldProperty::setPrice(float price){
    Property::setPrice(price * (1 - (discount/100)));
}