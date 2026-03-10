#include <cstdio>

int main()
{
        int a,b,c;
        a=b=1;
        for(b=1;b<10;b++)
        {
                for(a=1;a<10;a++)
                {
                c=a*b;
                printf("%dx%d=%d\n",b,a,c);
                }
        }




        return 0;
}