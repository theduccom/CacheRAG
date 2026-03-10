#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int num;
     
    for(int k=1;k<10;k++)
    {
        for (int i=1; i<10; i++)
        {
            num=k*i;
            cout << k << "x" << i << "=" << num << "\n";
        }
    }
    return 0;
}