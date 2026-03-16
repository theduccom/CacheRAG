#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int price,n,sum=0,cnt=0;
    double average=0;
    while (scanf("%d,%d",&price,&n) != EOF)
    {
       cnt++;
       sum+=price*n;
       average+=n;
    }
    average/=cnt;
    cout << sum << endl << round(average) << endl;
    return 0;
}