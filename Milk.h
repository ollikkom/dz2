//
// Created by qwerty on 14.05.17.
//

#ifndef DZ2_MILK_H
#define DZ2_MILK_H

#pragma once
#include "Product.h"

class Milk : public Product
{
private:
    int containers;

public:
    Milk() : Product() { containers = 0; }
    Milk(const string& _name, size_t _price, int _containers) : Product(_name, _price) { containers = _containers;  };
    ~Milk() {}
    int getContainers() const { return containers;  }
    void setContainers(int _containers) { containers = _containers; }
    void prodPrint(ostream& out);
    //friend ostream& Milk::operator<<(ostream& out, Milk& obj);

};
#endif //DZ2_MILK_H
