//
// Created by qwerty on 14.05.17.
//

#ifndef DZ2_VEGGIE_H
#define DZ2_VEGGIE_H

#pragma once
#include "Product.h"

class Meat : public Product
{
private:
    string part;

public:
    Meat() : Product() { part = nullptr; }
    Meat(const string& _name, size_t _price, string _part) : Product(_name, _price) { part = _part; }
    string getPart() const { return part; }
    void setPart(string _part) { part = _part; }
    //friend ostream& Meat::operator<<(ostream& out, Meat& obj);
    virtual void prodPrint(ostream& out);

};


#endif //DZ2_VEGGIE_H
