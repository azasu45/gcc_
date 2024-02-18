#include <iostream>
#include <cstdlib>
#include "ListNode.h"

using namespace std;
int Test_ListNode_InsertFirst(int argc, char **argv)
{
    int expect = 10;
    ListNode<int> list;

    for (int i = 0; i < expect; i++)
    {
        list.InsertFirst(i);
    }

    return 0;
}