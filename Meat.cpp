#include "Meat.h"

/*ostream& operator<<(ostream& out, Meat& obj){
	obj.prodPrint(out);
    return out;
}*/

void Meat::prodPrint(ostream & out){
    out << name.c_str() << " " << price << " " << part.c_str();
}
