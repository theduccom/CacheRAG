#include <cstdio>
#include<iostream>
#include<string>

using namespace std;
int sta[8][8];
int a,b;
int dx[]={ 0, 0, 0, 0, 0, 0,-3,-2,-1, 1, 2, 3};
int dy[]={-3,-2,-1, 1, 2, 3, 0, 0, 0, 0, 0, 0};
void bc(int y,int x){

	for(int i=0;i<12;i++){
		if(y+dy[i]>=0&&y+dy[i]<8&&x+dx[i]>=0&&x+dx[i]<8){
			if(sta[y+dy[i]][x+dx[i]]==1){
				sta[y+dy[i]][x+dx[i]]=0;
				bc(y+dy[i],x+dx[i]);
			}
		}
	}

	return;
}
int main(){
	std::ios_base::sync_with_stdio(false);

	int n;
	string inp;

	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		for(int j=0;j<8;j++){
			cin>>inp;
			for(int k=0;k<8;k++){
				sta[j][k]=inp[k]-'0';
			}
		}
		cin>>a;
		cin>>b;
		sta[b-1][a-1]=0;
		bc(b-1,a-1);
		cout<<"Data "<<i<<":"<<endl;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cout<<sta[j][k];
			}
			cout<<endl;
		}
	}

	return 0;
}