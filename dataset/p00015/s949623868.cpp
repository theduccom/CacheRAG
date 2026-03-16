#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int n=0;
  string as;
  string bs;
  int a[100]={};
  int b[100]={};
  int c[100]={};
  int i=0;
  int alen=0;
  int blen=0;
  int clen=0;
  int k=0;
  int j=0;

  cin>>n;

  for(j=0;j<n;j++)
    {
      for(i=0;i<100;i++)
        a[i]=b[i]=c[i]=0;
      alen=0;
      blen=0;
      clen=0;
      k=0;

      cin>>as;
      cin>>bs;

      alen=as.size();
      blen=bs.size();

      for(i=0;i<alen;i++)
        {
          a[i]=as[alen-i-1];
          //printf("a[%d]=%d\n", i, a[i]);                                      
          switch(a[i])
            {
            case '0' : a[i]=0; break;
            case '1' : a[i]=1; break;
            case '2' : a[i]=2; break;
            case '3' : a[i]=3; break;
            case '4' : a[i]=4; break;
            case '5' : a[i]=5; break;
            case '6' : a[i]=6; break;
            case '7' : a[i]=7; break;
            case '8' : a[i]=8; break;
            case '9' : a[i]=9; break;
            }
        }

      for(i=0;i<blen;i++)
        {
          b[i]=bs[blen-i-1];
          //printf("b[%d]=%d\n", i, b[i]);                                      
          switch(b[i])
            {
            case '0' : b[i]=0; break;
            case '1' : b[i]=1; break;
            case '2' : b[i]=2; break;
            case '3' : b[i]=3; break;
            case '4' : b[i]=4; break;
            case '5' : b[i]=5; break;
            case '6' : b[i]=6; break;
            case '7' : b[i]=7; break;
            case '8' : b[i]=8; break;
            case '9' : b[i]=9; break;
            }
        }

      clen=(alen > blen)? alen : blen;

      for(i=0;i<clen;i++)
        {
          c[i]+=a[i]+b[i];
          c[i+1]=c[i]/10;
          if(c[clen]!=0)
            k=1;
          c[i]=c[i]%10;
        }

      if(clen>80 || c[80]!=0)
        cout<<"overflow"<<endl;

      else
        {
          for(i=clen+k-1;i>=0;i--)
            cout<<c[i];
          puts("");
        }
    }

}