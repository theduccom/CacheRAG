#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int main(){
	int n;
	cin>>n;
	char ct[8][8];
	int dt[8][8];
	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cin>>ct[j][k];
				dt[j][k]=ct[j][k]-'0';
			}
		}
		int x,y;
		cin>>x>>y;
		queue<pair<int,int> > que;
		que.push(pair<int,int>(x-1,y-1));
		while(!que.empty()){
			int nowX=que.front().first;
			int nowY=que.front().second;
			dt[nowY][nowX]=0;
			que.pop();
			for(int p=-3;p<=3;p++){
				if((nowY+p)>=0 && (nowY+p)<8){
					if(dt[nowY+p][nowX]){
						dt[nowY+p][nowX]=0;
						que.push(pair<int,int>(nowX,nowY+p));
					}
				}
				if((nowX+p)>=0 && (nowX+p)<8){
					if(dt[nowY][nowX+p]){
						dt[nowY][nowX+p]=0;
						que.push(pair<int,int>(nowX+p,nowY));
					}
				}
			}
		}
		cout<<"Data "<<i+1<<":"<<endl;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cout<<dt[j][k];
			}
			cout<<endl;
		}
	}
	return 0;
}