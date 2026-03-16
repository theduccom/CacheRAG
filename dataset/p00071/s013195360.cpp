#include <iostream>
#include <string>
using namespace std;

void explode(int bomb[14][14],int x,int y){
	bomb[x][y]=0;
	for(int m=-3;m<=3;m++){
		if(bomb[x+m][y]==1){
			explode(bomb,x+m,y);
		}else if(bomb[x][y+m]==1){
			explode(bomb,x,y+m);
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int bomb[14][14]={0};
		string str;
		int x,y;
		for(int j=0;j<8;j++){
			cin>>str;
			for(int k=0;k<8;k++){
				bomb[j+3][k+3]=str[k]-48;
			}
		}
		cin>>x;
		cin>>y;
		explode(bomb,y+2,x+2);
		cout<<"Data "<<i<<":"<<endl;
		for(int j=3;j<=10;j++){
			for(int k=3;k<=10;k++){
				cout<<bomb[j][k];
			}
			cout<<endl;
		}
	}
	return 0;
}