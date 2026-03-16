#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
struct ST {
	int a;
	int b;
	int c;
};
long long brock[1000][1000];
long long ds[1000][1000];
int q[4]={0,-1,0,1};
int p[4]={1,0,-1,0};
int main(){
	stack <ST> S;
	ST ma;
	ST ba;
	int w,h;//???????????§??????
	int xs,ys;//??????????????§?¨?
	int xg,yg;//??´????????§?¨?
	int n;//????????????????????°
	int c,d,x,y;//????????????????????±
	int i,j,m,check=0;
	while(1){
		memset(ds,0,sizeof(ds));
		memset(brock,0,sizeof(brock));
		cin>>w>>h;//???????????§????????\???
		if(w==0&&h==0){
			break;
		}
		cin>>xs>>ys>>xg>>yg;//??????????????¨??´???????????§?¨???\???
		cin>>n;//????????????????????°
		for(i=0;i<n;i++){
			cin>>c>>d>>x>>y;
			if(d==0){
				for(m=y;m<y+2;m++){
					for(j=x;j<x+4;j++){
						brock[m][j]=c;
					}
				}
			}
			else{
				for(m=y;m<y+4;m++){
					for(j=x;j<x+2;j++){
						brock[m][j]=c;
					}
				}
			}
		}
		/*for(i=1;i<h;i++){
			for(j=1;j<w;j++){
				cout<<brock[i][j];
			}
			cout<<endl;
		}*/
		if(brock[ys][xs]!=brock[yg][xg]){
			cout<<"NG"<<endl;
		}
		else{
			ma.a=ys;
			ma.b=xs;
			ma.c=brock[ys][xs];
			ds[ys][xs]=1;
			S.push(ma);
			check=0;
			while(!S.empty()){
				ba=S.top();
				S.pop();
				ds[ba.a][ba.b]=1;
				if(ba.a==yg&&ba.b==xg){
					check=1;
					continue;
				}
				for(i=0;i<4;i++){
					if(ba.a+p[i]>0&&ba.a+p[i]<=h&&ba.b+q[i]>0&&ba.b+q[i]<=w&&ds[ba.a+p[i]][ba.b+q[i]]==0&&brock[ba.a+p[i]][ba.b+q[i]]==brock[yg][xg]){
						ma.a=ba.a+p[i];
						ma.b=ba.b+q[i];
						ma.c=brock[ba.a+p[i]][ba.b+q[i]];
						S.push(ma);
					}
				}
			}
		if(check==1){
			cout<<"OK"<<endl;
		}
		else{
			cout<<"NG"<<endl;
		}
		}
	}
	return 0;
}