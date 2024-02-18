#include <iostream>
#include <cstdlib>
#include "ListNode.h"

using namespace std;
int Test_ListNode_GetElements(int argc, char **argv)
{
    int expect = 10;
    ListNode<int> list;
    Node<int> *ap;
    for (int i = 0; i < expect; i++)
    {
        if (i == 0 && !list.Empty())
            return 1;

        bool res = list.InsertLast(i, ap);
        // if (!res)
        //     return 1;

        // ap = list.GetLastNode();
    }

    return 0;
}