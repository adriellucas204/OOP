#include "property.h"
#include <ostream>
using namespace std;

Property::Property(string address, float price, bool status) : address(address), sale(status) {
  setPrice(price);
}

ostream &operator<<(ostream &out, const Property &property) {
  out << "Price: " << property.price << endl;
  out << "Address: " << property.address << endl;

  if (property.sale)
    out << "Status: is on sale" << endl;
  else
    out << "Status: is not on sale" << endl;

  return out;
}