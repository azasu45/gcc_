#include "Node.h"
#include <iostream>
#include <vector>

using namespace std;

int Test_Node(int argc, char **argv)
{
    Node<int> node;
    vector<int> vec = {1, 855, 3, 488, 5, 488, 78, 2324, 22323, 10};

    for (int i = 0; i < vec.size(); i++)
    {
        node.SetInfo(vec[i]);

        if (node.GetInfo() != vec[i])
        {
            return 1;
        }
    }

    return 0;
}