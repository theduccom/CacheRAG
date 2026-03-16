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
		int k;
		cin>>k;
		for(int i=0;i<k;i++){
			int p,q,r;
			cin>>p>>q>>r;
			if(r==0)
				cout<<C[p-1][q-1]<<endl;
			if(r==1)
				cout<<T[p-1][q-1]<<endl;
		}
		}
	return 0;
}