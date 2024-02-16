#include <iostream>
#include <cstdlib>
#include <vector>

#include "../Node.h"

using namespace std;
int main()
{

    vector<int> expect = {300, 211, 432, 222, 748, 17777, 98787, 54, 2, 3};
    Node<int> node;
    for (int i = 0; i < 10; i++)
    {
        node.SetInfo(i);
        cout << i << endl;
    }

    system("PAUSE");
    return 0;
}