#include "Shop.h"

Shop::Shop(const Shop& shop){
    for (int i = 0; i < (int)shop.products.size(); i++)
        products.push_back(shop.products[i]);
}

void Shop::addProduct(Product* product){
    products.push_back(product);
}

void Shop::removeProduct(int i){
  products.erase(products.end()-1);
}

Product Shop::getProduct(int i){
    return *products.at(i);
}

Product* Shop::getProducts(){
    return *products.data();
}