#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;     

int ta[100][100];
const int BAN=10;
int main(){
 char ttmp;
int y,x,s,cnt=0,ma=0;
while(cin>>x>>ttmp>>y>>ttmp>>s){
	x+=2,y+=2;
	if(s==1){
	 ta[y][x]++;
	 ta[y+1][x]++;
	 ta[y][x-1]++;
	 ta[y-1][x]++;
	 ta[y][x+1]++;
	}
	if(s==2||s==3){
	for(int i=-1;i<=1;i++)for(int j=-1;j<=1;j++)ta[y+i][x+j]++;
	}
	if(s==3){
	ta[y+2][x]++;
	ta[y][x+2]++;
	ta[y-2][x]++;
	ta[y][x-2]++;
	}
}//endwhile
/*for(int i=2;i<BAN+2;i++){
	for(int j=2;j<BAN+2;j++){
	cout<<ta[i][j];
	}
	cout<<endl;
}*/
for(int i=0+2;i<BAN+2;i++){
	for(int j=0+2;j<BAN+2;j++){
	if(ta[i][j]==0)cnt++;
	ma=max(ma,ta[i][j]);
	}
}
cout<<cnt<<endl<<ma<<endl;
return 0;
}