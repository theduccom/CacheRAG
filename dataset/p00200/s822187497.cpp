#include <iostream>
using namespace std;

const int INF = 1000000000;

int main()
{
	while(true){
		int n, m;	//線路の情報の数n, 駅の数m
		cin >> n >> m;

		if(n==0 && m==0)
			break;

		int C[100][100];	//costのグラフ
		int T[100][100];	//timeのグラフ
		for(int i=0; i<m; i++){
			for(int j=0; j<m; j++){
				if(i==j){
					C[i][j] = T[i][j] = 0;		//対角線は0
				}
				else{
					C[i][j] = T[i][j] = INF;    
				}
			}
		}

		for(int i=0; i<n; i++){
			int a, b, c, t;		//線路の情報a,bとcost,time
			cin >> a >> b >> c >> t;

			C[a-1][b-1] = C[b-1][a-1] = c;
			T[a-1][b-1] = T[b-1][a-1] = t;
		}

		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					if(C[j][k]>C[j][i]+C[i][k])
						C[j][k] = C[j][i]+C[i][k];
					if(T[j][k]>T[j][i]+T[i][k])
						T[j][k] = T[j][i]+T[i][k];
				}
			}
		}

		int k;	//問い合わせの数
		cin >> k;
		for(int i=0;i<k;i++){
			int p, q, r;	//出発駅p, 到着駅q, 値の種類r
			cin >> p >> q >> r;
			if(r)	//r==1なら最短時間
				cout << T[p-1][q-1] << endl;
			else
				cout << C[p-1][q-1] << endl;
		}	
	}

	return 0;
}
