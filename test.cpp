#include <iostream>
using namespace std;

int main()
{

    int myarray[5] = {1, 2, 3, 4, 5};
    int len = sizeof(myarray) / sizeof(myarray[0]);

    for (int i = 0; i < len; i++)
    {
        cout << myarray[i] << endl;
    }

    return 0;
}
