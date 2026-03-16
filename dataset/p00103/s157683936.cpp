#include<stdio.h>
#include<string.h>

int num,a,b,c;
int out,result;
int base[5] = {0};
char str0[132],str1[] = "OUT",str2[] = "HIT",str3[] = "HOMERUN";

int main()
{
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
    {
        while(1)
        {
            scanf("%s",str0);
            a = strcmp(str0,str1);
            b = strcmp(str0,str2);
            c = strcmp(str0,str3);
            if(a == 0)
            {
                out++;
                if(out == 3)break;
            }
            if(b == 0)
            {
                if(base[2] == 1)
                {
                    result++;
                    base[2] = 0;
                }
                if(base[1] == 1)
                {
                    base[1] = 0;
                    base[2] = 1;
                }
                if(base[0] == 1)
                {
                    base[1] = 1;
                    base[0] = 0;
                }
                if(base[0] == 0)
                {
                    base[0] = 1;
                }
                //printf("(%d,%d,%d)\n",base[0],base[1],base[2]);
            }
            if(c == 0)
            {
                result++;
                for(int j = 0; j < 3; j++)
                {
                    if(base[j] == 1)
                    {
                        result++;
                        base[j] = 0;
                    }

                }
            }
            //printf("[%d]\n",result);
        }
        printf("%d\n",result);
        out = 0;result = 0;
        for(int j = 0; j < 3; j++)
        {
            base[j] = 0;
        }
    }
}