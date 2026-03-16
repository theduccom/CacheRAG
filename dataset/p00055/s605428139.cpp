#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double a[11]= {0};
    while(cin >> a[1])
    {
        double sum=a[1];
        for(int i=2;i<=10;i++)
        {
            if(i%2 == 1)
            {
                a[i] = a[i-1]/3;
                sum += a[i];
            }
            else
            {
                a[i] = a[i-1]*2;
                sum += a[i];
            }
        }
    printf("%.8f\n",sum);
    }

    return 0;
}