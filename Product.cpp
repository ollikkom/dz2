//
// Created by qwerty on 14.05.17.
//

#include "Product.h"

Product::Product(const Product& product){
    price = product.price;
    name = product.name;
}

Product& Product::operator=(const Product & product){
    if (&product == this) return *this;
    price = product.price;
    name = product.name;
    getName();
    return *this;
}

ostream& operator<<(ostream& out, Product& obj){
    obj.prodPrint(out);
    return out;
}

void Product::prodPrint(ostream& out) {
    out << name.c_str() << " " << price;
}

bool Product::operator==(const Product & product){
    return (name == product.name);
}