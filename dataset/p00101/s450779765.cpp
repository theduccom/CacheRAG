#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j,n;
    string a;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        getline(cin,a);
        l=a.size();
        for(j=0;j<l-6;j++)
        {
            if(a[j]=='H' && a[j+1]=='o' && a[j+2]=='s' && a[j+3]=='h' && a[j+4]=='i' && a[j+5]=='n' && a[j+6]=='o')
            a[j+6]='a';
        }
       cout<<a<<endl;
    }
    return 0;
}

