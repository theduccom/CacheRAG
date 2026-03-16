
//Nayeem Shahriar Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.

  #include <iostream>
  #include <cstdio>
  #include <algorithm>
  #include <cstring>

  #define MAX 105000

  using namespace std;

  int main()

  {
      bool prime[MAX];

      memset(prime,true,sizeof(prime));

      long int i;

      prime[0]=false;
      prime[1]=false;

      for( i=0;i*i<MAX;i++)
      {
          if(prime[i]==true)
          {
              for(int j=i*2;j<MAX;j=j+i)
              {
                  prime[j]=false;
              }
          }
      }
      int prme[10000];

      int p=0;

      for(i=0;i<MAX;i++)

      {
          if(prime[i]==true)

          {
              prme[p]=i;
              p++;
              if(p>10000-1){
                break;
            }
          }

      }

      int n;

      while(cin>>n){

            if(n==0)

            {
                break;
            }

      int ans=0;

      for(int k=0;k<n;k++)

      {
          ans=ans+prme[k];
      }

      cout<<ans<<endl;

      }

      return 0;

  }