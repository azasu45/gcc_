#include <cstdlib>
#include <iostream>
#include "lib/list/List.h"

using namespace std;

typedef Nodo<int> *Apuntador;
Lista<int> Lista1;
Apuntador ap, sig;
int valor, valoraux;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Numero :";
        cin >> valor;
        ap = Lista1.ObtenerPrimero();
        if (Lista1.Vacia())
            Lista1.InsertarComienzo(valor);
        else
        {
            valoraux = Lista1.ObtenerPrimero()->ObtenerInfo();
            if (valor < valoraux)
                Lista1.InsertarComienzo(valor);
            else
                while (ap != NULL)
                {
                    sig = ap->ObtenerDerecho();
                    if (sig == NULL)
                    {
                        Lista1.InsertarDerecho(ap, valor);
                        ap = NULL;
                    }
                    else
                    {
                        valoraux = sig->ObtenerInfo();
                        if (valor < valoraux)
                        {
                            Lista1.InsertarDerecho(ap, valor);
                            ap = NULL;
                        }
                        else
                            ap = sig;
                    };
                };
        };
    };
};