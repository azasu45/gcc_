#ifndef Node_H
#define Node_H
template <class Type>
class Node
{
private:
    Type info;
    Node<Type> *right;
    Node<Type> *left;

public:
    // Get and Set Info
    Type GetInfo();
    void SetInfo(Type in);

    // Get and Set Right Node
    Node<Type> *GetRightNode();
    void SetRightNode(Node<Type> *p);

    // Get and Set Left Node
    Node<Type> *GetLeftNode();
    void SetLeftNode(Node<Type> *p);
};
#include "Node.cpp"
#endif