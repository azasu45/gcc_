#ifndef ListNode_H
#define ListNode_H
#include "Node.hpp"

template <class Type>
class ListNode
{
    typedef Node<Type> *Pointer;

private:
    Pointer first;
    Pointer last;

public:
    // Node<Type> *GetFirstNode();
    void SetFirstNode(Pointer p);
    // Node<Type> *GetLastNode();
    // void SetLastNode(Pointer p);
    // ListNode();
    // bool Empty();
    // bool Full();
    // bool InsertFirst(Type Value);
    // bool InsertLast(Type Value);
    // bool InsertAfter(Pointer p, Type Value);
    // bool DeleteFirst(Type &Value);
    // bool DeleteLast(Type &Value);
    // bool DeleteAfter(Pointer p, Type &Value);
    // ~ListNode();
};
#include "ListNode.cxx"
#endif