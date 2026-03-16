#include <iostream>
using namespace std;

const int INF = 1000000000;

int main()
{
	while(true){
		int n, m;
		cin >> n >> m;

		if(n==0 && m==0)
			break;

		 int C[100][100];
		 int T[100][100];
	   for(int i=0; i<m; i++){
		   for(int j=0; j<m; j++){
			   if(i==j){
	         C[i][j] = T[i][j] = 0;
		     }else{
			     C[i][j] = T[i][j] = INF;
		     }
		   }
     }

	   for(int i=0; i<n; i++){
		   int a, b, c, t;
		   cin >> a >> b >> c >> t;

	     C[a-1][b-1] = C[b-1][a-1] = c;
		   T[a-1][b-1] = T[b-1][a-1] = t;
    }

    int k;
    int d[m][m];
    int e[m][m];
    cin>>k;
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        e[i][j]=C[i][j];
        d[i][j]=T[i][j];
      }
    }
    for(int k=0;k<m;k++){
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(e[i][j]>e[i][k]+e[k][j]){
            e[i][j]=e[i][k]+e[k][j];
            e[j][i]=e[j][k]+e[k][i];
          }
          if(d[i][j]>d[i][k]+d[k][j]){
            d[i][j]=d[i][k]+d[k][j];
            d[j][i]=d[j][k]+d[k][i];
          }
        }
      }
    }
    for(int i=0;i<k;i++){
      int p, q, r;
      int a=0;
      cin>>p>>q>>r;
      if(r==0){
        a=e[p-1][q-1];
        cout<<a<<endl;
      }
      if(r==1){
        a=d[p-1][q-1];
        cout<<a<<endl;
      }
    }
	}

	return 0;
}


