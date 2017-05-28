//
// Created by qwerty on 14.05.17.
//

#include "Fruit.h"

/*ostream& operator<<(ostream& out, Fruit& obj){
	obj.prodPrint(out);
    return out;
}*/

void Fruit::prodPrint(ostream & out){
    out << name.c_str() << " " << price << " " << box;
}