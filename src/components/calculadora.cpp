// Libs -------
#include <iostream>
#include <stdlib.h>
// ------------

using namespace std;

float operation(int option, float n1, float n2)
{
    switch (option)
    {
    case 1:
        return n1 + n2;
        break;
    case 2:
        return n1 - n2;
        break;
    case 3:
        return n1 * n2;
        break;
    case 4:
        return n1 / n2;
        break;
    default:
        return 0;
    }

    return 0;
}

float message(std::string mensaje)
{
    float numero = 0;

    string msj = mensaje == "" ? "Hola, ingresa un numero: " : mensaje;

    cout << msj << endl;

    cin >> numero;

    return numero;
}
void result(int option, float n1, float n2)
{
    n1 = message("Ingrese numero 1");
    n2 = message("Ingrese numero 2");

    cout << "El resultado es: " << operation(option, n1, n2) << endl;

    system("PAUSE");

    system("CLS");
}

void menu(float n1, float n2)
{
    int option = 0;
    do
    {
        cout << "Operación" << endl;
        cout << "------------------" << endl;
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) Multiplicación" << endl;
        cout << "4) Division" << endl;
        cout << "0) Salir" << endl;
        cout << "------------------" << endl;
        cout << "¿opción?:";
        cin >> option;

        system("CLS");

        if (option != 0)
            result(option, n1, n2);

    } while (option != 0);
}

int main()
{
    int option = 0;
    do
    {
        cout << "- - - - - - - - - - - -" << endl;
        cout << "1) CALCULADORA" << endl;
        cout << "2) CALCULADORA PUNTERO" << endl;
        cout << "0) Salir" << endl;
        cout << "- - - - - - - - - - - -" << endl;
        cin >> option;
        system("CLS");
        if (option == 1)
        {
            float numberOne = 0;
            float numberTwo = 0;

            menu(numberOne, numberTwo);
        }
        else if (option == 2)
        {
            float *numberOne = new float(0);
            float *numberTwo = new float(0);

            menu(*numberOne, *numberTwo);

            numberOne = NULL;
            numberTwo = NULL;
            delete numberOne;
            delete numberTwo;
        }
    } while (option != 0);

    return 0;
}