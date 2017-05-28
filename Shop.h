//
// Created by qwerty on 14.05.17.
//

#ifndef DZ2_SHOP_H
#define DZ2_SHOP_H

#pragma once
#include <vector>
#include "Product.h"

class Shop {

private:
    vector<Product*> products;

public:
    Shop() {};
    Shop(const Shop&);
    ~Shop() { products.clear(); };

    void addProduct(Product*);
    Product getProduct(int);
//    void removeProduct(int);
    Product* getProducts();
    int getCount() { return products.size(); }

    void clearShop() { products.clear(); }
};



#endif //DZ2_SHOP_H
