#include <iostream>

using namespace std;

int main()
{
    int b[3];

    for (int i = 0; i < 3; ++i)
        cin >> b[i];

    if ((b[0] == 1 && b[1] == 1 && b[2] == 0) ||
        (b[0] == 0 && b[1] == 0 && b[2] == 1))
        cout << "Open\n";
    else
        cout << "Close\n";


    return 0;
}