#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	string buf;
	vector< vector<int> > paper(14,vector<int>(14,0));
	while((cin>>buf)!=NULL){
		vector<int> a(3);
		for(int i=0;i<3;++i){
			a[i]=buf[2*i]-'0';
		}
		if(a[2]==1){
			const int dx[]={0,0,0,1,-1};
			const int dy[]={0,1,-1,0,0};
			for(int i=0;i<5;++i){
				++paper[a[0]+2+dx[i]][a[1]+2+dy[i]];
			}
		}else if(a[2]==2){
			const int dx[]={0,0,0,1,1,1,-1,-1,-1};
			const int dy[]={0,1,-1,0,1,-1,0,1,-1};
			for(int i=0;i<9;++i){
				++paper[a[0]+2+dx[i]][a[1]+2+dy[i]];
			}
		}else if(a[2]==3){
			const int dx[]={0,0,0,1,1,1,-1,-1,-1,0,2,0,-2};
			const int dy[]={0,1,-1,0,1,-1,0,1,-1,2,0,-2,0};
			for(int i=0;i<13;++i){
				++paper[a[0]+2+dx[i]][a[1]+2+dy[i]];
			}
		}
	}
	int cnt=0;
	int max=0;
	for(int i=2;i<12;++i){
		for(int j=2;j<12;++j){
			if(paper[i][j]==0){
				++cnt;
			}else{
				if(paper[i][j]>max) max=paper[i][j];
			}
		}
	}
	cout << cnt << endl;
	cout << max << endl;
	return 0;
}