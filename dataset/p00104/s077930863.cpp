#include <iostream>
#include <string>
using namespace std;
int main(){
	int h,w,x,y;
	char dp[150][150];
	while(true){
	cin>>h>>w;
	if(h==0&&w==0)
		break;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>dp[i][j];
		}
	}
	x=0,y=0;
	int i=0;
	bool loop=false;
	while(true){
		if(dp[x][y]=='>')
			y+=1;
		if(dp[x][y]=='<')
			y-=1;
		if(dp[x][y]=='^')
			x-=1;
		if(dp[x][y]=='v')
			x+=1;
		if(dp[x][y]=='.')
			break;
		i++;
		if(i==h*w){
			cout<<"LOOP"<<endl;
			loop=true;
			break;
		}
	}
	if(loop==false)
	cout<<y<<" "<<x<<endl;
	}
	return 0;
}