#include <iostream>
#include <ostream>
#include <string>
#include "oldProperty.h"
#include "newProperty.h"
#include "property.h"

using namespace std;

int main(){
    NewProperty property1("St Saint Paul n 183", 250000, 10);
    OldProperty property2("St Saint Paul n 135", 199000, 10);

    Property property3("Av Saint John n 1840", 300000, false);

    cout << property1 << endl;
    cout << property2 << endl;
    cout << property3 << endl;

    Property *p{nullptr};
    p = &property2;
    p->setPrice(14778);

    cout << *p << endl;

    return 0;
}