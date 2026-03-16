#include<iostream>
#include<ios>
using namespace std;
int sum,cnt,a,b,c;
main()
{
    while(~scanf("%d,%d",&a,&b))
    {
        c++;
        cnt+=b;
        sum+=a*b;
    }
    cout<<sum<<endl;
    if(cnt*10/c%10>=5)cout<<cnt/c+1<<endl;
    else cout<<cnt/c<<endl;
}
