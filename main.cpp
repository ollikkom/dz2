#include "Shop.h"
#include "Meat.h"
#include "Milk.h"
#include "Fruit.h"

int menu() {
    int ch;
    cout << "1. Add meat\n"
            "2. Delete\n"
            "3. Enter\n"
            "0. Exit\n";
    cin >> ch;
    return ch;
}

int main()
{
    Shop shop;
    Product* products = nullptr;

    while (1) {
        switch (menu()) {
            case 1:	shop.addProduct(new Meat("Svinina", 300, "Koreyka")); break;
            case 2: shop.addProduct(new Milk("37 kopeek", 55, 1)); break;
            case 3: shop.addProduct(new Fruit("BANANA", 100, 2)); break;
            case 4:
                products = shop.getProducts();
                for (int i = 0; i < shop.getCount(); i++)
                    cout << products[i] << endl;
                break;

            case 0: exit(0);
            default: cout << "Invalid action!" << endl; break;
        }
    }
    return 0;
}

