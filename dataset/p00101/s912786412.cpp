#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char ara[10000],ara2[100000];
    int a,b,c,i,j,k,n;
    cin>>n;
    getchar();
    for (i=0;i<n;i++,printf ("\n"))
    {
        scanf("%[^\n]",ara);
        getchar();
        for (j=0;ara[j]!='\0';j++)
        {
            if (ara[j]=='o')
                if (ara[j-5]=='o' && ara[j-4]=='s' && ara[j-3]=='h' && ara[j-2]=='i' && ara[j-1]=='n' && ara[j-6]=='H')
            {
                ara[j]='a';
            }

        }
        printf ("%s",ara);
    }
}
