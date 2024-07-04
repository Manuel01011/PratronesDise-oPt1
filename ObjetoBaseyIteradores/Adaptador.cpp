#include "Adaptador.h"

string AdaptadorBase::tostring() const{

    return typeid(*this).name(); //retorna el nombre de la clase
}

ostream& operator<<(ostream& salida, const ObjetoBase& obj){
    salida << obj.tostring() << endl;
    return salida;
}
