#include "Milk.h"

/*ostream& operator<<(ostream& out, Milk& obj){
	obj.prodPrint(out);
    return out;
}*/

void Milk::prodPrint(ostream& out){
    out << name.c_str() << " " << price << " " << containers;
}
