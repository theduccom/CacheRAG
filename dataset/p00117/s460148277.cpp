/*****include*****/
#include <iostream>
#include <fstream>

/*****デバッグ定義*****/
//#define DEBUG
#define INF 10000
/*****マクロ定義*****/

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/
int Field[20][20];

/*****その他関数置き場*****/
int djikstra(int start,int goal,int townnum){
	int *dis;
	bool *used;
	int town;
	int res;
	dis = new int [townnum];
	used = new bool [townnum];
	for(int i=0;i<townnum;i++){
		dis[i] = INF;
		used[i] = false;
	}
	dis[start] = 0;
	while(true){
		town = -1;
		for(int i=0;i<townnum;i++){
			if(!used[i] && (town == -1 || dis[town] > dis[i])){
				town = i;
			}
		}
		if(town == -1)	break;
		used[town] = true;
		for(int i=0;i<townnum;i++){
			if(dis[i] > dis[town] + Field[town][i]){
				dis[i] = dis[town] + Field[town][i];
			}
		}
	}
	
	/*for(int i=0;i<townnum;i++)	cout << dis[i] << " ";
	cout << endl;*/
	res = dis[goal];
	delete used;
	delete dis;
	return res;
}
/*****main関数*****/
int main(){
	/*****ファイルオープン*****/
#ifdef DEBUG
	ofstream fout("output.txt");
	ifstream fin("input.txt");
	if(!fout || !fin){
		cout << "Can't open the file.\n";
		return;
	}
#endif
	/*****変数置き場*****/
	int townnum;
	int rootnum;
	int ts,tg,value,price;
	int cost=0;
	int t1,t2,c1,c2;
	/*****処理部*****/
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			Field[i][j] = INF;
		}
	}
	cin >> townnum >> rootnum;
	for(int i=0;i<rootnum;i++){
		scanf("%d,%d,%d,%d",&t1,&t2,&c1,&c2);
		//cin >> t1 >> ',' >> t2 >> ',' >> c1 >> ',' >> c2;
		Field[t1-1][t2-1] = c1;Field[t2-1][t1-1] = c2;
		Field[t1-1][t1-1] = 0;Field[t2-1][t2-1] = 0;
	}
	scanf("%d,%d,%d,%d",&ts,&tg,&value,&price);
	//cout << ts << " " << tg << " " << townnum <<endl;
	cost = 0;
	cost += djikstra(ts-1,tg-1,townnum);
	cost += djikstra(tg-1,ts-1,townnum);
	cout << (value - price - cost) << endl;
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}