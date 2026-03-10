#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 1;
    for(;i <= 9; i++)
    {
        j=1;
        for(;j<=9;j++) cout << i << "x" << j << "=" << i*j << endl;
    }
    return 0;
}