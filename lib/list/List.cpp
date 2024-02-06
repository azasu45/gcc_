#include <iostream>
#include <string>
#include "List.h"

using namespace std;
template <class Tipo>
Nodo<Tipo> *Lista<Tipo>::ObtenerPrimero()
{
    return primero;
};
template <class Tipo>
void Lista<Tipo>::AsignarPrimero(Nodo<Tipo> *p)
{
    primero = p;
};

// template <class Tipo>
// void Lista<Tipo>::AsignarUltimo(Nodo<Tipo> p){

// };
template <class Tipo>
Lista<Tipo>::Lista()
{
    primero = NULL;
};
template <class Tipo>
bool Lista<Tipo>::Vacia()
{
    return primero == NULL;
};
template <class Tipo>
bool Lista<Tipo>::Llena()
{
    Nodo<Tipo> *p;
    p = new Nodo<Tipo>;
    if (p == NULL)
        return true;
    else
    {
        delete p;
        return false;
    }
};
template <class Tipo>
bool Lista<Tipo>::InsertarComienzo(Tipo Valor)
{
    Apuntador nuevo;
    if (!Llena())
    {
        nuevo = new Nodo<Tipo>;
        nuevo->AsigInfo(Valor);
        nuevo->AsigDer(primero);
        primero = nuevo;
        return true;
    }
    else
        return false;
};
template <class Tipo>
bool Lista<Tipo>::EliminarComienzo(Tipo &valor)
{
    Apuntador viejo;
    if (!Vacia())
    {
        viejo = primero;
        valor = viejo->obtInfo();
        primero = primero->obtDer();
        delete viejo;
        return true;
    }
    else
        return false;
};
template <class Tipo>
bool Lista<Tipo>::InsertarDerecho(Apuntador p, Tipo valor)
{
    Apuntador nuevo;

    if (llena())
    {
        return false
    }

    if (Vacia())
    {
        InsertarComienzo(valor);
        p = ObtPrimero();
    }
    else if (p == NULL)
    {
        return false;
    }
    else
    {
        nuevo = new Nodo<Tipo>;
        nuevo->AsignarInfo(valor);
        nuevo->AsignarDer(p->ObtDer());
        p->AsignarDer(nuevo);
        return true;
    }
}
template <class Tipo>
bool Lista<Tipo>::EliminarDerecho(Apuntador p, Tipo &valor)
{
    Apuntador viejo;
    if (p == NULL)
        return false;
    else if (p->obtDer() == NULL)
        return false;
    else
    {
        viejo = p->ObtDer();
        valor = viejo->ObtInfo();
        p->AsigDer(viejo->ObtDer());
        delete viejo;
        return true;
    };
};
template <class Tipo>
Lista<Tipo>::~Lista()
{
    Nodo<Tipo> *p;
    while (!Vacia())
    {
        p = primero->ObtDer();
        delete primero;
        primero = p;
    };
};