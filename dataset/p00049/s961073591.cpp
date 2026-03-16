#include<ios>
#include<cstring>
int cnt[4];char s[9];
main()
{
    while(~scanf("%*d,%s\n",s))
    {
        cnt[strcmp(s,"AB")?strcmp(s,"A")?strcmp(s,"B")?3:1:0:2]++;
    }
    for(int i=0;i<4;i++)printf("%d\n",cnt[i]);
}
