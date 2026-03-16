#include <iostream>
using namespace std;

const int INF = 1000000000;

int main()
{
	int C[100][100];
	int T[100][100];
	int z=0;
	int p[200];
	int q[200];
	int r[200];
	int A[200];
	while(true){
		int n, m;
		cin >> n >> m;

		if(n==0 && m==0)
			break;

		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				if(i==j){
					C[i][j] = T[i][j] = 0;
				}
				else{
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
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(C[i][j]>C[i][k]+C[k][j]){
						C[i][j]=C[i][k]+C[k][j];
						
					}
				}
			}
		}
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					if(T[i][j]>T[i][k]+T[k][j]){
						T[i][j]=T[i][k]+T[k][j];
						
					}
				}
			}
		}
		cin>>z;
		for(int i=0;i<z;i++){
				cin>>p[i]>>q[i]>>r[i];
			if(r[i]==0){
				cout<<C[p[i]-1][q[i]-1]<<endl;
			}
			if(r[i]==1){
				cout<<T[p[i]-1][q[i]-1]<<endl;
			}
		}
		
	}
	

	return 0;
}