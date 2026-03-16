#include <iostream>
const int INF = 10000;
using namespace std;

int cost[100][100];
int tim[100][100];

void init()
{
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(i == j){
				cost[i][j] = 0;
				tim[i][j] = 0;
			}else{
				cost[i][j] = INF;
				tim[i][j] = INF;
			}
		}
	}
}

int main()
{
	int n,m;
	while(cin >> n >> m){
		if(n == 0 && m == 0)
			break;
		init();
		int a,b,c,t;
		for(int i=0;i<n;i++){
			cin >> a >> b >> c >> t;
			cost[a-1][b-1] = c;
			cost[b-1][a-1] = c;
			tim[a-1][b-1] = t;
			tim[b-1][a-1] = t;
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					int cdis = cost[j][i] + cost[i][k];
					if(cdis < cost[j][k]){
						cost[j][k] = cdis;
					}
					int tdis = tim[j][i] + tim[i][k];
					if(tdis < tim[j][k]){
						tim[j][k] = tdis;
					}
				}
			}
		}
		
		int n;
		cin >> n;
		int p,q,r;
		for(int i=0;i<n;i++){
			cin >> p >> q >> r;
			if(r == 0){
				cout << cost[p-1][q-1] << endl;
			}else if(r == 1){
				cout << tim[p-1][q-1] << endl;
			}
		}
	}
	return 0;
}