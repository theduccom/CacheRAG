#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool N[102][102];
int map[102][102],R,ga,gb,w,h,f=0;
void block(int ,int);
int main()
{
	int i,n,c,d,X=0,Y=0,x,y;
	cin>>w>>h;
	while(w!=0||h!=0){
		memset(map,0,sizeof(map));
		memset(N,false,sizeof(N));
		cin>>X>>Y;
		cin>>ga>>gb;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>c>>d>>x>>y;
			if(d){
				map[y][x]=c;
				map[y+1][x]=c;
				map[y+2][x]=c;
				map[y+3][x]=c;
				map[y][x+1]=c;
				map[y+1][x+1]=c;
				map[y+2][x+1]=c;
				map[y+3][x+1]=c;

			}
			else{
				map[y][x]=c;
				map[y+1][x+1]=c;
				map[y+1][x+2]=c;
				map[y+1][x+3]=c;
				map[y+1][x]=c;
				map[y][x+1]=c;
				map[y][x+2]=c;
				map[y][x+3]=c;

			}
		}
		R=map[Y][X];
		if(R==map[gb][ga]&&R!=0){
			block(Y,X);
			if(f==1) cout<<"OK"<<endl;
		        else cout<<"NG"<<endl;
		}
		else cout<<"NG"<<endl;
		//for(i=0;i<h;i++){
			//for(j=0;j<w;j++){
			//	cout<<map[i][j];
			//}
				
	//		cout<<endl;
		//}
		f=0;
		cin>>w>>h;
	}
	return 0;
}
void block(int b,int a)
{
	//if(f==1) return 1;
	N[b][a]=true;
	if(ga==a&&gb==b) f=1;
		if(map[b][a+1]==R&&N[b][a+1]==false) block(b,a+1); //???
		if(map[b+1][a]==R&&N[b+1][a]==false) block(b+1,a); //???
		if(map[b][a-1]==R&&N[b][a-1]==false) block(b,a-1); //???
		if(map[b-1][a]==R&&N[b-1][a]==false) block(b-1,a); //???
}