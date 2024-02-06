#include "Nodo.h"

template <class Tipo>
void Nodo<Tipo>::AsignarInfo(Tipo in)
{

    info = in;
};
template <class Tipo>
Tipo Nodo<Tipo>::ObtenerInfo()
{
    return info;
};
template <class Tipo>
void Nodo<Tipo>::AsignarDer(Nodo<Tipo> *p)
{
    der = p;
};
template <class Tipo>
Nodo<Tipo> *Nodo<Tipo>::ObtenerDerecho()
{
    return der;
};

template <class Tipo>
void Nodo<Tipo>::AsignarInicio(Nodo<Tipo> *p)
{
    inicio = p;
};
