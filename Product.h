//
// Created by qwerty on 14.05.17.
//

#ifndef DZ2_PRODUCT_H
#define DZ2_PRODUCT_H

#pragma once
#include <iostream>
using namespace std;

class Product
{

protected:
    size_t price;
    string name;

public:
    Product() { name = nullptr; price = 0; }
    Product(const string& _name, size_t _price) : name(_name), price(_price) {};
    Product(const Product& product);
    virtual ~Product() = default;

    string getName() const { return name; }
    size_t getPrice() const { return price; }
    void setName(const string _name) { name = _name; }
    void setPrice(size_t _price) { price = _price; }

    Product& operator=(const Product&);
    virtual void prodPrint(ostream& out);
    friend ostream& operator<<(ostream&, Product&);


    bool operator==(const Product&);

};



#endif //DZ2_PRODUCT_H
