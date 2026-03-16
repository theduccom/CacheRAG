#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        char a[1050]={0};
        //fflush(stdin);
        scanf("%[^\n]",a);
        getchar();
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]=='H'&&a[j+1]=='o'&&a[j+2]=='s'&&a[j+3]=='h'&&a[j+4]=='i'&&a[j+5]=='n'&&a[j+6]=='o')
            {
                a[j+6]='a';
            }
        }
        printf("%s\n",a);
        //for(j = 0; j < 1050; j++)a[j]=0;
    }
    return 0;
}