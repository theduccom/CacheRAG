#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
 
using namespace std;
 
int W , N ;
int dp[1024][1024];
int w[1024] , v[1024],O;
char cn;

int main ()
{
  int cont = 1;
  while(cin >> W >> N){
    
    for(int i = 0; i < N; i++)
      cin >> v[i] >> cn >> w[i] ;
    
    for(int i = N-1; i >= 0; i--)
      {
        for(int j = 0; j <= W; j++)
	  {
            if( j < w[i]) dp[i][j] = dp[i+1][j];
            else dp[i][j] = max( dp[i+1][j] , dp[i+1][j-w[i]]+v[i] );
	  }
      }
    for(int i = 0; i <=W; i++)
      if(dp[0][i]==dp[0][W]){
	O = i;
	break;
      }
    cout << "Case " << cont <<':' <<endl;
    cout << dp[0][W] << endl << O <<endl;
    //cout << << endl;
    /*  
    for(int i = 0; i < 10 ; i++)
      {       
	for(int j = 0; j <= 50; j++)
	  printf("%3d", dp[i][j]);
        puts("");
      }    
      }*/
    cont++;
  }
}