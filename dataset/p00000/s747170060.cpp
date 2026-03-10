#include <iostream>

int main()
{
    int i = 1;
    int j = 1;
    for(;i <= 9; i++)
    {
        for(j=1;j<=9;j++) std::cout << i << "x" << j << "=" << i*j << std::endl;
    }
    return 0;
}