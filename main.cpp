#include <iostream>
#include <stdlib.h>
#include <stdexcept>

using namespace std;

/**
 * La implementación define la interfaz para todas las clases de implementación. Él
 * no tiene que coincidir con la interfaz de Abstraction. De hecho, los dos
 * las interfaces pueden ser completamente diferentes. Normalmente la interfaz de implementación
 * proporciona sólo operaciones primitivas, mientras que la Abstracción define operaciones superiores
 * operaciones de nivel basadas en esas primitivas.
 */

// class Implement
// {
// public:
//     virtual ~Implement() {}
//     virtual string OperationImement() const = 0;
// };

int menu()
{
    int option = 0;
    cout << "Operacion" << endl;
    cout << "Suma: 1" << endl;
    cout << "Resta: 2" << endl;
    cout << "Multiplicacion: 3" << endl;
    cout << "Division: 4" << endl;
    cout << "Salir:0" << endl;
    cout << "opcion ? :";
    cin >> option;
    return option;
}

float clientMensaje()
{
    float numero;

    cout << "Ingrese un numero" << endl;
    cin >> numero;

    if (typeid(numero) != typeid(float))
    {
        throw invalid_argument("No es un numero adecuado");
    }

    return numero;
}

float operation(float numOne, float numTwo, int option)
{
    switch (option)
    {
    case 1:
        return numOne + numTwo;
        break;
    case 2:
        return numOne - numTwo;
        break;
    case 3:
        return numOne * numTwo;
        break;
    case 4:
        return numOne / numTwo;
        break;
    default:
        return 0;
        break;
    }
}

void clientOperation(float resultado,int operacion){

}

int main()
{
    try
    {
        int selectOption = 0;
        float numeroOne=0;
        float numeroTwo=0;

        do
        {
            selectOption = menu();
            numeroOne = clientMensaje();
            numeroTwo = clientMensaje();

             
        } while (selectOption != 0);

        return 0;
    }
    catch (std::invalid_argument &e)
    {
        cout << e.what() << endl;
        return -1;
    }
}