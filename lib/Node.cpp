#include "Node.h"
/**
 * GetInfo function returns the information stored in the Node.
 *
 * @return the information stored in the Node
 */
template <class TypeNode>
TypeNode Node<TypeNode>::GetInfo()
{
    return info;
}

/**
 * Set the information of the node to the given value.
 *
 * @param in the value to set as the information of the node
 *
 * @return void
 *
 * @throws ErrorTypeNode (if applicable) description of error
 */
template <class TypeNode>
void Node<TypeNode>::SetInfo(TypeNode in)
{
    info = in;
}

/**
 * Get the right node of the current Node.
 *
 * @return The right node of the current Node
 *
 * @throws None
 */
template <class TypeNode>
Node<TypeNode> *Node<TypeNode>::GetRightNode()
{
    return right;
}

/**
 * Set the right node of the current Node.
 *
 * @param p pointer to the new right node
 *
 * @return void
 *
 * @throws None
 */
template <class TypeNode>
void Node<TypeNode>::SetRightNode(Node<TypeNode> *p)
{
    right = p;
};

/**
 * Get the left node of the current Node.
 *
 * @return the left node of the current Node
 *
 */
template <class TypeNode>
Node<TypeNode> *Node<TypeNode>::GetLeftNode()
{
    return left;
};

/**
 * Set the left node of the Node.
 *
 * @param p pointer to the left node
 *
 * @return void
 *
 * @throws None
 */
template <class TypeNode>
void Node<TypeNode>::SetLeftNode(Node<TypeNode> *p)
{
    left = p;
};
