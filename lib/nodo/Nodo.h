#ifndef Nodo_H
#define Nodo_H
template <class Tipo>
class Nodo
{
private:
    Tipo info;
    Nodo<Tipo> *derecho;
    Nodo<Tipo> *izquierdo;

public:
    void AsignarInfo(Tipo in);
    Tipo ObtenerInfo();
    void AsignarDer(Nodo<Tipo> *p);
    Nodo<Tipo> *ObtenerDerecho();
    void AsignarInicio(Nodo<Tipo> *p);
    Nodo<Tipo> *ObtenerIzquierdo();
    void AsignarIzquierdo(Nodo<Tipo> *p);
};
#include "Nodo.cpp"
#endif