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

		/*int N,p,q,r;
		int d[100][100];
		cin >> N;
		for(int I=0;I<N;I++){
			cin >> p >> q >> r;
			if(r){
				for(int i=0;i<m;i++){
					for(int j=0;j<m;j++){
						d[i][j]=T[i][j];
					}
				}
			}else{
				for(int i=0;i<m;i++){
					for(int j=0;j<m;j++){
						d[i][j]=C[i][j];
					}
				}
			}
			for(int k=0;k<m;k++){
				for(int i=0;i<m;i++){
					for(int j=0;j<m;j++){
						if(d[i][j]>d[i][k]+d[k][j]){
							d[i][j]=d[i][k]+d[k][j];
						}
					}
				}
			} 
			cout << d[p-1][q-1] << endl;
		}*/
		
		int k,p,q,r;
		cin >> k;
		for(int I=0;I<k;I++){
			int d[m];
			bool u[m];
			cin >> p >> q >> r;
			for(int i=0;i<m;i++){
				d[i] = INF;
				u[i] = false;
			}
			d[p-1]=0;

			while(1){
				int v = -1;
				for(int i=0;i<m;i++){
					if(u[i])continue;
					if(v==-1||d[i]<d[v]){
						v = i;
					}
				}
				if(v==-1)break;
				u[v]=true;

				for(int i=0;i<m;i++){
					if(r){
						if(d[i]>d[v]+T[v][i]){
							d[i]=d[v]+T[v][i];
						}
					}else{
						if(d[i]>d[v]+C[v][i]){
							d[i]=d[v]+C[v][i];
						}
					}
				}
			}
		
			cout << d[q-1] << endl;
		}		
	}

	return 0;
}