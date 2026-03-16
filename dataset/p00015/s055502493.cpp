#include<bits/stdc++.h>
using namespace std;
void gg(int a[],int b[],int c[])
{
    int x=0;
    //memset(c,0,sizeof(c));
    c[0]=max(a[0],b[0]);
    for(int i=1;i<=c[0];++i)
    {
        c[i]=a[i]+b[i]+x;
        x=c[i]/10;
        c[i]%=10;
    }
    if(x>0) c[++c[0]]=x;
}
int main()
{
    int t;
cin>>t;
while(t--){
    char a[1000],b[1000];
    int a2[1000],b2[1000],c2[1000];
    scanf("%s%s",a,b);
    a2[0]=strlen(a);
    b2[0]=strlen(b);
    for(int i=1;i<=a2[0];i++) a2[i]=int(a[a2[0]-i]-'0');
    for(int i=1;i<=b2[0];i++) b2[i]=int(b[b2[0]-i]-'0');
    gg(a2,b2,c2);
    if(c2[0]<=80) for(int i=c2[0];i>=1;i--) printf("%d",c2[i]);
    else printf("overflow");
    cout<<endl;
}
    return 0;
}
