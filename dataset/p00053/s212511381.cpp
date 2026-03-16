#include<iostream>
using namespace std;
#define MAX 500010
int prime[MAX];
int sump[MAX];
int main()
{
    prime[0]=1;
    prime[1]=1;
    for(int i=0;i<MAX;i++)
    {
        if(prime[i]==0)
        for(int j=2;j<MAX;j++)
        {
            if( i*j>MAX) break;
            prime[i*j] = 1;
        }
    }
    int num=1;
    for(int i=0;i<MAX;i++)
    {
        if(prime[i]==0)
        {
            if(num==10001)break;
            sump[num] = sump[num-1] + i;
            num++;
        }
    }
    int n;
    while(cin >> n)
    {
        if(n==0)break;
        cout << sump[n] << endl;
    }

    return 0;

}