#include<bits/stdc++.h>
using namespace std;

int main(){
bool a[1000001]{};
a[0]=a[1]=true;
for(int b=2;b<1000001;b++){
	if(!a[b]){
		for(int c=b*2;c<1000001;c+=b)a[c]=true;
	}
}
int x,y;
while(scanf("%d%d",&x,&y),x|y){
	bool u[1000000]{};
	u[0]=true;
	int p;
	for(int g=0;g<x;g++){
		scanf("%d",&p);
		for(int q=p;q<=y;q++)if(u[q-p])u[q]=true;
	}
	for(int h=y;h!=-1;h--){
		if(u[h]&&a[h]==false){printf("%d\n",h);break;}
		if(h==0)printf("NA\n");
	}
}
}