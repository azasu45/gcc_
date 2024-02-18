
#include <iostream>
#include <string>
#include "ListNode.h"

using namespace std;
template <class Type>
void ListNode<Type>::SetFirstNode(Pointer p)
{
    first = p;
}
template <class Type>
Node<Type> *ListNode<Type>::GetFirstNode()
{
    return first;
}

template <class Type>
void ListNode<Type>::SetLastNode(Pointer p)
{
    last = p;
}
template <class Type>
Node<Type> *ListNode<Type>::GetLastNode()
{
    return last;
}

template <class Type>
bool ListNode<Type>::Empty()
{
    return first == NULL;
};

template <class Type>
bool ListNode<Type>::Full()
{
    Node<Type> *p;
    p = new Node<Type>;
    if (p == NULL)
        return true;
    else
    {
        delete p;
        return false;
    }
};

template <class Type>
bool ListNode<Type>::InsertFirst(Type Valor)
{
    Pointer newNode;
    if (!Full())
    {
        newNode = new Node<Type>;
        newNode->SetInfo(Valor);
        newNode->SetRightNode(first);
        first = newNode;
        return true;
    }
    else
        return false;
};

// template <class Tipo>
// bool Lista<Tipo>::EliminarComienzo(Tipo &valor)
// {
//     Apuntador viejo;
//     if (!Vacia())
//     {
//         viejo = primero;
//         valor = viejo->obtInfo();
//         primero = primero->obtDer();
//         delete viejo;
//         return true;
//     }
//     else
//         return false;
// };

template <class Type>
bool ListNode<Type>::InsertLast(Type value, Pointer p)
{
    // Pointer newNode;
    // if (Full())
    // {
    //     return false;
    // }
    // if (Empty())
    // {
    //     InsertFirst(value);
    //     p = GetFirstNode();
    // }
    // else if (p == NULL)
    // {

    //     return false;
    // }
    // else
    // {

    //     newNode = new Node<Type>;
    //     newNode->SetInfo(value);
    //     newNode->SetRightNode(p->GetRightNode());
    //     p->SetRightNode(newNode);
    //     return true;
    // }

    return true;
}

// template <class Tipo>
// bool Lista<Tipo>::EliminarDerecho(Apuntador p, Tipo &valor)
// {
//     Apuntador viejo;
//     if (p == NULL)
//         return false;
//     else if (p->obtDer() == NULL)
//         return false;
//     else
//     {
//         viejo = p->ObtDer();
//         valor = viejo->ObtInfo();
//         p->AsigDer(viejo->ObtDer());
//         delete viejo;
//         return true;
//     };
// };

template <class Type>
ListNode<Type>::ListNode()
{
    first = NULL;
    last = NULL;
}

template <class Type>
ListNode<Type>::~ListNode()
{
    Node<Type> *p;
    if (!Empty())
    {
        p = first->GetRightNode();
        delete first;
        first = p;
    };
};