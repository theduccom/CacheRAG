#include<iostream>
#include<list>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 60000
#define PRIME 0

int isprime[MAX];

int main()
{
    //memset(isprime,1,sizeof(isprime));
    isprime[0]=1;
    isprime[1]=1;
    for(int i=2;i<MAX;i++)
    {
        if(isprime[i]==PRIME)
        for(int j=2;j<MAX;j++)
        {
            if(i*j>=MAX) break;
            isprime[i*j] = 1;

        }
    }
    list<int> plist;
    for(int i=2;i<MAX;i++)
    {
        if(isprime[i]==0) plist.push_back(i);
    }
    int n;
    while(cin>>n)
    {
        int a,b;
        list<int>::iterator it = upper_bound(plist.begin(),plist.end(), n);
        b = *it;
        --it;
        if(*it<n) a= *it;
        else{--it;a= *it;}


        cout << a <<" "<< b <<endl;

    }
    
    return 0;
}