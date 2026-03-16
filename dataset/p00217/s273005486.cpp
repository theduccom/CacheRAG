#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    while(1)
    {
    int n;
    int nn,p1,p2;
    int sum;
    int mnn=0,mpp=0;
    
        cin >> n;
        if(n==0)break;
        for(int i = 0 ; i<n ; i++)
        {
            cin>>nn>>p1>>p2;
            sum=p1+p2;
            if(mpp<sum)
            {
                mnn = nn;
                mpp = sum;
            }
        }
        cout << mnn << " " << mpp << endl;
    }
    return 0;
}