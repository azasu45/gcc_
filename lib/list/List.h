#ifndef Lista_H
#define Lista_H
#include "../nodo/Nodo.h"
template <class Tipo>
class Lista
{
    typedef Nodo<Tipo> *Apuntador;

private:
    Apuntador primero;
    Apuntador ultimo;

public:
    Nodo<Tipo> *ObtenerUltimo();
    Nodo<Tipo> *ObtenerPrimero();
    void AsignarPrimero(Apuntador p);
    void AsignarUltimo(Apuntador p);
    Lista();
    bool Vacia();
    bool Llena();
    bool InsertarComienzo(Tipo Valor);
    bool InsertarDerecho(Apuntador p, Tipo valor);
    bool EliminarComienzo(Tipo &valor);
    bool EliminarDerecho(Apuntador p, Tipo &valor);
    ~Lista();
};

#include "List.cpp"
#endif