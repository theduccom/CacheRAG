#include<iostream>


using namespace std;

int main(){
	const int maxsize=20;
	int size;
	int E[maxsize][maxsize];
	int qqq = 999999999;
	int cost[maxsize];
	bool used[maxsize];

	int m;

	cin >> size;
	cin >> m;

	for(int i=0;i<size;i++){
		used[i] = false;
		cost[i] = qqq;
		for(int j=0;j<size;j++){
			E[i][j] = qqq;
		}
	}

	for(int i=0;i<m;i++){
		int a,b,c,d;
		char cnm;
		cin >> a >> cnm >> b >> cnm >> c >> cnm >> d;
		E[a-1][b-1] = c;
		E[b-1][a-1] = d;
	}
	int x,y,xx,yy;
	char cnm;
	cin >> x >> cnm >> y >> cnm >> xx >> cnm >> yy;
	cost[x-1] = 0;
	xx -= yy;
	while(true){
		int v=-1;
		for(int i=0;i<size;i++){
			if(!used[i] && (v==-1 || cost[v] > cost[i])){
				v = i;
			}
		}		
		if(v==-1 || v == y-1){
			break;
		}
		used[v] = true;
		for(int i=0;i<size;i++){
			cost[i] = min(cost[i],cost[v]+E[v][i]);
		}
	}
	xx -= cost[y-1];
	for(int i=0;i<size;i++){
		used[i] = false;
		cost[i] = qqq;
	}
	cost[y-1] = 0;
	while(true){
		int v=-1;
		for(int i=0;i<size;i++){
			if(!used[i] && (v==-1 || cost[v] > cost[i])){
				v = i;
			}
		}		
		if(v==-1 || v == x-1){
			break;
		}
		used[v] = true;
		for(int i=0;i<size;i++){
			cost[i] = min(cost[i],cost[v]+E[v][i]);
		}
	}
	xx -= cost[x-1];
	cout << xx << endl;
}