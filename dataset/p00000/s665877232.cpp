#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    for (int i = 1 ; i <= 9 ; i++)
    {
        for (int g = 1 ; g <= 9 ; g++)
        {
            printf("%dx%d=%d\n",i,g,i*g);
        }
    }
}