#include <iostream>
#include <ostream>
#pragma once
using namespace std;

class Property {
friend ostream &operator<<(ostream&, const Property &);
private:
    string address;
    float price;
    bool sale;
public:
    string getAddress() const {return this->address;};
    float getPrice() const {return this->price;};
    bool isOnSale() const {return this->sale;};

    virtual void setPrice(const float price) {this->price = ((price < 0) ? 0 : price);};
    void setAddress(const string address) {this->address = address;};
    void setSale(const bool status) {this->sale = status;};

    Property(string, float, bool status = true);
};