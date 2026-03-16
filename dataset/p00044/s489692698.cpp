#include<iostream>
using namespace std;
bool f(int a)
{
    for(int i=2;i*i<=a;i++)if(a%i<1)return 0;
    return 1;
}
main()
{
    int n;
    while(cin>>n)
    {
        int m=n-1;
        while(!f(m))m--;
        cout<<m<<" ";
        n++;
        while(!f(n))n++;
        cout<<n<<endl;
    }
}
