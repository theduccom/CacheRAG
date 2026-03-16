#include <iostream>
using namespace std;
int main(){
	char data[101][101];
	bool f[101][101];
	int h,w;
	while(1){
		cin>>h>>w;
		if(h==0&&w==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>data[j][i];
				f[j][i]=true;
			}
		}
		int x=0,y=0;
		while(1){
			if(!f[x][y]){
				cout<<"LOOP"<<endl;
				break;
			}
			f[x][y]=false;
			if(data[x][y]=='>')x++;
			else if(data[x][y]=='<')x--;
			else if(data[x][y]=='^')y--;
			else if(data[x][y]=='v')y++;
			else{
				cout<<x<<" "<<y<<endl;
				break;
			}
		}
	}
}