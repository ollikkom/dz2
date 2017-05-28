//
// Created by qwerty on 14.05.17.
//

#ifndef DZ2_FRUIT_H
#define DZ2_FRUIT_H

#pragma once
#include "Product.h"

class Fruit : public Product
{
private:
    int box;

public:
    Fruit() : Product() { box = 0; }
    Fruit(const string & _name, size_t _price, int _box) : Product(_name, _price) { box = _box; }
    int getBox() const { return box; }
    void setBox(int _box) { box = _box; }
    //friend ostream& Fruit::operator<<(ostream& out, Fruit& obj);
    void prodPrint(ostream& out);
};

#endif //DZ2_FRUIT_H
